CC = gcc
# -no-pieオプションはClangでは，ない？
CFLAGS  := -fno-stack-protector -g -Wall -no-pie $(INCLUDE)

PROGNAME = auth_overflow auth_overflow2 exploit_notesearch \
	exploit_notesearch_env getenv_example getenvaddr \
	notesearch notetaker overflow_example byte_size \
	fmt_uncommon fmt_uncommon2 fmt_vuln fmt_vuln2 dtors_sample

all: $(PROGNAME)

.c.o: util.h
	$(CC) $< -o $@

clean:
	rm -rf ./*.o
	rm -rf $(PROGNAME)
	rm -rf ./*.dSYM
