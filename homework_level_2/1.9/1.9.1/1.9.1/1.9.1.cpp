#include<stdio.h>

void main()
{
	int c;
	while ((c = getchar()) != 1)
	{
		putchar(c);
	}
	printf("\nCTRL+A is a correct ending\n");
}