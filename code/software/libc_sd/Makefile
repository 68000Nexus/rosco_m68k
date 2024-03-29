CC=m68k-elf-rosco-gcc
CFLAGS?=
LDFLAGS?=

all: filetest.bin

filetest.bin: main.o
	$(CC) $(LDFLAGS) -Wl,-Map=filetest.bin.map -o $@ $^

filetest.elf: main.o
	$(CC) $(LDFLAGS) -Wl,--oformat=elf32-m68k -Wl,-Map=filetest.elf.map -o $@ $^

clean:
	$(RM) main.o filetest.bin filetest.bin.map filetest.elf filetest.elf.map

.PHONY: all clean

