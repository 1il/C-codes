#include <stdio.h>
#include "three.h"

void printx(char ch, int a, int b)
{
	int i , j;
	for(i=0; i < b; i++)
	{
		for( j=0; j < a; j++)
	 	{
			printf("%c", ch);
		}
		printf("\n");
	}

	return;
}
