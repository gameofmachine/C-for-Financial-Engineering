#include<stdio.h>
void main()
{
	int ch = 0, characters = 0, words = 1, lines = 1;
	bool space = false;
	do
	{
			characters++;
		if (ch == '\n')
		{
			lines++;

		}
		if ((ch != ' '&&ch != '\n') && (space == true))
		{
			words++;
		}

		if (ch == ' ' || ch == '\n')
		{
			space = true;
		}
		else
		{
			space = false;
		}
	} while ((ch=getchar())!=4);

	printf("\ncharacters:%d,lines:%d,words:%d\n", characters, lines, words);

}