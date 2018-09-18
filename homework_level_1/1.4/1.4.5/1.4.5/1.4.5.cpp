#include<stdio.h>
void main()
{
	int low = 0, high = 19, step = 1;
	double fahrenheit, celsius;
	printf("Celsius Fahrenheit\n");
	for (celsius = low; celsius <= high; celsius += step)
	{
		fahrenheit = 9 * celsius / 5 + 32;
		printf("%f%10.1f\n",celsius, fahrenheit);
	}
}