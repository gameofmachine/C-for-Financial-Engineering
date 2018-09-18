#include<stdio.h>
void main()
{
	int ch = 0, characters = 0, words = 1, newlines = 1;
	bool space = false;
	while ((ch = getchar()) != 4)
	{
		characters++;
		switch (ch)
		{
		case '\n':newlines++; break;
		case ' ':; break;
		default:
			switch (space)
			{
			case true: words++; break;
			}
		}
		switch (ch)
		{
		case'\n':space = true; break;
		case' ':space = true; break;
		default:space = false; break;
		}

	}

	printf("\ncharacters:%d,newlines:%d,words:%d\n", characters, newlines, words);

}