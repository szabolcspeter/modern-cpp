#include <stdio.h>
#include <stdlib.h>

// The entire source is compiled with C compiler

int main() {
	
	// Malloc doesn't initialize memory, only allocates
	int *p = malloc(sizeof(int)); // In C++ we should explicit cast void* to int* like this : int *p = (int *)malloc(sizeof(int))
	if (p == NULL) {
		printf("Failed to allocate memory\n");
		return -1;
	}
	*p = 5;
	printf("%d", *p);
	free(p);
	p = NULL;

	// Calloc DOES initialize allocated memory
	int *c = calloc(1, sizeof(int));  // for example: 0x0000023716BC6AF0  00 00 00 00
	if (c == NULL) {
		printf("Failed to allocate memory\n");
		return -1;
	}
	*c = 5;
	printf("%d", *c);
	free(c);
	c = NULL;

	return 0;
}
