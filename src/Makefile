CC = gcc
CFLAGS  := -g -Wall $(INCLUDE)

PROGNAME = segment file_access

all: $(PROGNAME)

.c.o: util.h
	$(CC) $< -o $@

clean:
	rm -rf *.o
	rm -rf $(PROGNAME)
	rm -rf *.dSYM
