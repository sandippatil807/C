#include<stdio.h>
#include<conio.h>

typedef struct
{
	int bookId;
	char title[20];
	float price;
}BOOK;

void accept(BOOK *);
void display(BOOK);
