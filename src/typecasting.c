#include <stdio.h>

int main() {
	int a, b;
	float c, d;

	a = 13;
	b = 5;
	c = a / b;
	d = (float) a / (float) b;

	printf("[int] a = %d\t\t b = %d\n", a, b);
	printf("[flt] c = %f\t d = %f\n", c, d);
}

