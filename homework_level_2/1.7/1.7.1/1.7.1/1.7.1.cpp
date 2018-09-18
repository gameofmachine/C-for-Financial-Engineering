#include<stdio.h>
void Swap(double* i, double* j);

void Swap(double* i, double* j)
{
	double a = *i;
	*i = *j;
	*j = a;
}

void main()
{
	double i = 123, j = 456;
	printf("%lf %lf\n", i, j);
	Swap(&i, &j);
	printf("%lf %lf\n", i, j);
}