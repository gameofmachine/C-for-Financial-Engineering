#include<stdio.h>
void main()
{
	int i = 10;
	int a;
	a = --i;
	printf("a=%d,i=%d\n", a,i);/*a=9,i=9*/

	i = 10;
	a = i--;
	printf("a=%d,i=%d\n", a, i);/*a=10,i=9*/

}