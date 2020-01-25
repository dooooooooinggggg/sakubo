CC = gcc
# -no-pieオプションはClangでは，ない？
CFLAGS  := -fno-stack-protector -g -Wall -no-pie $(INCLUDE)

PROGNAME = chapter1/addressofc2 chapter1/convert2 chapter1/input chapter1/pointer chapter1/game_of_chance \
	chapter1/pointer2_types chapter1/pointer_types chapter1/scope chapter1/scope3 chapter1/typecasting \
	chapter2/segment chapter2/file_access

all: $(PROGNAME)

.c.o: util.h
	$(CC) $< -o $@

clean:
	rm -rf */*.o
	rm -rf $(PROGNAME)
	rm -rf */*.dSYM
