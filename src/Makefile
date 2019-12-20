CC = gcc
CFLAGS  := -g -Wall $(INCLUDE)

PROGNAME = chapter2/segment chapter2/file_access

all: $(PROGNAME)

.c.o: util.h
	$(CC) $< -o $@

clean:
	rm -rf *.o
	rm -rf $(PROGNAME)
	rm -rf *.dSYM
