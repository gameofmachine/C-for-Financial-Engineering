/* Calculate the length of a string*/
#include<stdio.h>
#define MAXLINE 30
//string length declaration
int length(char str[]);

int main()
{
	char string[MAXLINE + 1];// Line of maxium 30 chars +\0
	int c;					//The input character
	int i = 0;				//The counter

	//Print intro text
	printf("Type up to %d chars.Exit with ^Z\n", MAXLINE);

	//Get the characters
	while ((c = getchar()) != EOF&& i < MAXLINE)
	{
		//Append entered character to string
		string[i++] = (char)c;
	}
	string[i] = '\0';		//String must be closed with \0
	printf("String length is %d\n", length(string));
}
/*Implement the Length() function here*/


int length(char str[])
{
	int counter = 0;
	while ((str[counter]) != '\0')
	{
		counter++;
	}
	return counter;
}
