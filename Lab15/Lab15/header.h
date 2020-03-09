#include<stdio.h>
#include<conio.h>


enum Category{MAGAZINE=1,NOVELS,ENCYCLOPEDEA,COOKING};

typedef struct
{
	char pubName[20];
	char pubAddress[20];
}publisher;

typedef struct
{
	int book_id;
	char title[20];
	float price;
	publisher p;
	enum Category c;
}book;

