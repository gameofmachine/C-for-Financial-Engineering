#include<stdio.h>
void main()
{
	int czero = 0, cone = 0, ctwo = 0, cthree = 0, cfour = 0, cother = 0, c;
	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
		case '0':czero++; break;
		case '1':cone++; break;
		case '2':ctwo++; break;
		case '3':cthree++; break;
		case '4':cfour++; break;
		default:cother++; break;
		}
	}
	printf("the times 0 has been typed:%d\n", czero);
	printf("the times 1 has been typed:%d\n", cone);
	printf("the times 2 has been typed:%d\n", ctwo);
	switch (cthree)
	{
	case 0:printf("Number three appears zero times\n"); break;
	case 1:printf("Number three appears one times\n"); break;
	case 2:printf("Number three appears two times\n"); break;
	case 3:printf("Number three appears three times\n"); break;
	default:printf("Number three appears more than three times\n"); break;
	}
	printf("the times 4 has been typed:%d\n", cfour);
	printf("the times others have been typed:%d\n", cother);

}