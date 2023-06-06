C_FILES = $(wildcard *.c) $(wildcard *.h)

all: $(C_FILES)
	cl65 -t cx16 -o TEST.PRG -l TEST.list main.c

run:
	/mnt/c/Users/hunte/Desktop/cx16Emu/x16emu.exe -prg TEST.PRG

clean:
	rm -f *.PRG *.list *.o
