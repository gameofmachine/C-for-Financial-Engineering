#include<stdio.h>
int minus(int a, int b)
{
	return a-b;
}
void main()
{
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	c = minus(a, b);
	printf("%d\n", c);
}
