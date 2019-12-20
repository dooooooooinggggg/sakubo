CC = gcc
CFLAGS  := -g -Wall $(INCLUDE)

PROGNAME = chapter2/segment chapter2/file_access \
	chapter3/auth_overflow chapter3/auth_overflow2 \
	chapter3/exploit_notesearch chapter3/exploit_notesearch_env chapter3/getenv_example \
	chapter3/getenvaddr chapter3/notesearch chapter3/notetaker chapter3/overflow_example

all: $(PROGNAME)

.c.o: util.h
	$(CC) $< -o $@

clean:
	rm -rf *.o
	rm -rf $(PROGNAME)
	rm -rf *.dSYM
