# Directories

SRCDIR = ./src
TESTDIR = ./test
OUTDIR = ./out
ODIR = $(OUTDIR)/obj
TESTODIR = $(OUTDIR)/test-obj
IDIR = ./src/include
DATADIR = ./gen

# Toolchain

CC = gcc
CFLAGS = -I$(IDIR) -Wall -Werror -pedantic -std=c99
AR = ar

ifdef MACH
	MACH_ARG = -mmcu=$(MACH) 
endif

# Files

LIB = libHamCode.a

_DEPS = dtmf.h morsecode.h morsecode_data.h varicode.h varicode_data.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = dtmf.o morsecode.o morsecode_data.o varicode.o varicode_data.o
ifdef CROSS_COMPILE
	ODIR = $(OUTDIR)/$(CROSS_COMPILE)obj
	OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))
else
	OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))
	TESTOBJ = $(patsubst %,$(TESTODIR)/%,$(_OBJ))
endif

_TESTS = DtmfTest.o VaricodeTest.o MorsecodeTest.o CuTest.o AllTests.o
TESTS = $(patsubst %,$(TESTODIR)/%,$(_TESTS))

# Make stuff

.PHONY: main test gentests profile clean
.PRECIOUS: %/.d

# To handle dependencies to output directories

%/.d:
	mkdir -p $(@D)
	touch $@

# Build
#
# make CROSS_COMPILE=avr- MACH=atmega328 for cross compile to AVR.

main: $(OUTDIR)/$(CROSS_COMPILE)$(LIB)

$(ODIR)/%.o: $(SRCDIR)/%.c $(DEPS) $(ODIR)/.d
	$(CROSS_COMPILE)$(CC) -c -o $@ $< $(CFLAGS) $(MACH_ARG)

$(ODIR)/%.o: $(DATADIR)/%.c $(DEPS) $(ODIR)/.d
	$(CROSS_COMPILE)$(CC) -c -o $@ $< $(CFLAGS) $(MACH_ARG)

$(OUTDIR)/$(CROSS_COMPILE)$(LIB): $(OBJ) $(OUTDIR)/.d
	$(CROSS_COMPILE)$(AR) rs $@ $^

# Test

test: $(OUTDIR)/test-$(LIB) $(TESTS) $(OUTDIR)/gcov/.d
	clang $(TESTS) -o $(OUTDIR)/run-all-tests -I./test $(CFLAGS) $(OUTDIR)/test-$(LIB) -fprofile-arcs -ftest-coverage
	$(OUTDIR)/run-all-tests
	gcov -l -o$(TESTODIR) $(SRCDIR)/*.c 2> /dev/null > $(OUTDIR)/gcov/summary.txt
	mv *.gcov $(OUTDIR)/gcov

$(TESTDIR)/AllTests.c: $(TESTDIR)/*.c
	$(TESTDIR)/make-tests.sh $(TESTDIR)/*.c > $(TESTDIR)/AllTests.c

$(TESTODIR)/%.o: $(TESTDIR)/%.c $(DEPS) $(TESTODIR)/.d $(TESTDIR)/AllTests.c
	clang -c -o $@ $< $(CFLAGS)

$(TESTODIR)/%.o: $(SRCDIR)/%.c $(DEPS) $(TESTODIR)/.d
	clang -c -o $@ $< $(CFLAGS) -fprofile-arcs -ftest-coverage

$(TESTODIR)/%.o: $(DATADIR)/%.c $(DEPS) $(TESTODIR)/.d
	clang -c -o $@ $< $(CFLAGS) -fprofile-arcs -ftest-coverage

$(OUTDIR)/test-$(LIB): $(TESTOBJ) $(OUTDIR)/.d
	$(AR) rs $@ $^

# Profile

profile: $(OUTDIR)/profile.log

$(OUTDIR)/profile.log: $(OUTDIR)/callgrind
	callgrind_annotate $< > $@
	cat $@

$(OUTDIR)/callgrind: $(OUTDIR)/test-$(LIB) gentests $(TESTS)
	clang $(TESTS) -o $(OUTDIR)/run-all-tests -I./test $(CFLAGS) $(OUTDIR)/test-$(LIB) -fprofile-arcs -ftest-coverage
	valgrind --dsymutil=yes --tool=callgrind --callgrind-out-file=$@ $(OUTDIR)/run-all-tests

# Clean

clean:
	rm -rf $(OUTDIR)
	rm $(TESTDIR)/AllTests.c
