#include <stdio.h>
#include "swap.h"

void interchange(int * u, int * v)
{

	int temp = *v;
	 *v = *u;
	 *u = temp;
	return;
}
