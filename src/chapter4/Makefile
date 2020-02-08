CC = gcc
# -no-pieオプションはClangでは，ない？
CFLAGS  := -fno-stack-protector -g -Wall -no-pie $(INCLUDE)

PROGNAME = simple-server tinyweb webserver-id

all: $(PROGNAME)

.c.o: util.h
	$(CC) $< -o $@

clean:
	rm -rf ./*.o
	rm -rf $(PROGNAME)
	rm -rf ./*.dSYM
