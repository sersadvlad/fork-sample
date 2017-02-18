#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int * mem = malloc(100 * sizeof(int));
	printf("mem %p\n", (void *)mem);
	return 0;
}
