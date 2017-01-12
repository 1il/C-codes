#include <stdio.h>
#include "one.h"

int main(void)
{
	int x,y;
	x = 5; 
	y = 20;

	printf("%f is the smaller number\n",min(x,y));

	return 0;
}
