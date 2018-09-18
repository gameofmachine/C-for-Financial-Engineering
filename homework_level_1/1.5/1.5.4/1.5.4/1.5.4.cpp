#include<stdio.h>
void printnumber(int n)
{
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}

	if (n > 9)
	{
		printnumber(n / 10);
	}
	int c = n % 10;
	putchar(c + '0');
	

}
void main()
{
	int a;
	printf("please enter one number:");
	scanf_s("%d", &a);
	printnumber(a);
}