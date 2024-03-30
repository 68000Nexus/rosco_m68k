CC=m68k-elf-rosco-gcc
OBJCOPY=m68k-elf-rosco-objcopy
OBJDUMP=m68k-elf-rosco-objdump
CFLAGS?=
LDFLAGS?=

all: filetest.bin filetest.dis

filetest.elf: main.o
	$(CC) $(LDFLAGS) -g -Wl,-Map=filetest.map -o $@ $^

filetest.dis: filetest.elf
	$(OBJDUMP) -d $< > $@

filetest.bin: filetest.elf
	$(OBJCOPY) -O binary $< $@

clean:
	$(RM) main.o filetest.bin filetest.map filetest.elf filetest.dis

.PHONY: all clean

