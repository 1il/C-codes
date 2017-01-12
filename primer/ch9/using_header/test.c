#include <stdio.h>
#include "swap.h"

int main(void)
{

	int a = 5;
	int b  = 10;
	interchange(&a, &b);

	printf("a: %d\n", a);
	printf("b: %d\n", b);

	return 0;
}
