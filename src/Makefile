CC = gcc
CFLAGS  := -fno-stack-protector -g -Wall $(INCLUDE)

PROGNAME = chapter1/addressofc2 chapter1/convert2 chapter1/input chapter1/pointer \
	chapter1/pointer2_types chapter1/pointer_types chapter1/scope chapter1/scope3 chapter1/typecasting \
	chapter2/segment chapter2/file_access \
	chapter3/auth_overflow chapter3/auth_overflow2 \
	chapter3/exploit_notesearch chapter3/exploit_notesearch_env chapter3/getenv_example \
	chapter3/getenvaddr chapter3/notesearch chapter3/notetaker chapter3/overflow_example

all: $(PROGNAME)

.c.o: util.h
	$(CC) $< -o $@

clean:
	rm -rf */*.o
	rm -rf $(PROGNAME)
	rm -rf */*.dSYM
