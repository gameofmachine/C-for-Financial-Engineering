#include<stdio.h>

void main()
{
	FILE* fp;
	fp = fopen("mychar.txt", "w+");
	int c;
	while ((c = getchar()) != 1)
	{
		fputc(c, fp);
	}
	printf("\nCTRL+A is a correct ending\n");
}