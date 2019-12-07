#include <stdio.h>
#include <string.h>

int main() {
	char message[20];
	int count, i;

	strcpy(message, "Hello, Wrold!\n");
	
	printf("How much repeat ?");
	scanf("%d", &count);

	for(i=0;i < count; i++)
		printf("%ed - %s=n", i, message);
}

