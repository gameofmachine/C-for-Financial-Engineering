#include<stdio.h>
void main()
{
	int i,a;
	scanf_s("%d", &i);
	a = i >> 2;
	printf("i>>2 equals to: %d\n", a);

	if (i < 0 && a>0)
	{

		printf("A logical shift is performed\n");
	}
	else
	{
		printf("A arithmetic shift is performed\n");
	}
}