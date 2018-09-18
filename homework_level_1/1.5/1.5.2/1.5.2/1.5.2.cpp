#include<stdio.h>

long factorials(long n)
{
	if (n == 1)
	{
		return 1;
	}
	return n*factorials(n - 1);
}

void main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d\n", factorials(n));
}