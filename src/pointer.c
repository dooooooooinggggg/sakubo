#include <stdio.h>
#include <string.h>
 
int main() {
	char str_a[20];
	char *pointer;
	char *pointer2;

	strcpy(str_a, "Hello, World!\n");
	pointer = str_a;
	printf(pointer); // Hello, World!

	pointer2 = pointer + 2;
	printf(pointer2); // llo, World!
	strcpy(pointer2, "y you guys!\n");
	printf(pointer); // Hey you guys!
}

