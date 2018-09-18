#include<stdio.h>

char* DayName(int i)
{
	char* day_name[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	if (i <= 7 && i>0)
	{
		printf("Day %d is %s\n", i, day_name[i - 1]);
	}
	else
	{
		printf("error\n");
	}
	return 0;
}

void main()
{
	int c;
	printf("Please enter a number:");
	scanf_s("%d", &c);
	DayName(c);
}



