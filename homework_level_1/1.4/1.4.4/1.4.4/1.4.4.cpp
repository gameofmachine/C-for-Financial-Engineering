#include<stdio.h>
void main()
{
	double low = 0, high = 300, step = 20,fahrenheit,celsius;
	printf("Fahrenheit Celsius\n");
	fahrenheit = low;
	while (fahrenheit <= high)
	{
		celsius = (5*(fahrenheit - 32))/9;
		printf("%f%10.1f\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + step;
	}
}