#include <stdio.h>

int mult(int a, int b) {
	return a * b + 10;
}

int main() {

	int a = 10;
	int b = 8;

	printf("%d \n", mult(a,b) );
	return 0;
}
