#include<stdio.h>

struct Article
{
	int Article_number;
	int Quantity;
	char* Description;
};

void print(Article* article)
{
	printf("Article number is %d\n", article->Article_number);
	printf("Quantity is %d\n", article->Quantity);
	printf("Description is %s\n", article->Description);
}

void main()
{
	Article article;
	article.Article_number = 19;
	article.Quantity = 20;
	article.Description = "Wanderful";
	print(&article);
}