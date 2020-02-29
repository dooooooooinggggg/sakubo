CC = gcc
# -no-pieオプションはClangでは，ない？
CFLAGS  := -fno-stack-protector -lpcap -g -Wall -no-pie $(INCLUDE)

PROGNAME = simple-server tinyweb webserver-id raw_tcpsniff pcap_sniff decode_sniff synflood

all: $(PROGNAME)

.c.o: util.h
	$(CC) $< -o $@

clean:
	rm -rf ./*.o
	rm -rf $(PROGNAME)
	rm -rf ./*.dSYM
