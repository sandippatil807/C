#include "header.h"

void main()
{
	book b;
	printf("\n Enter the book id:");
	scanf("%d",&b.book_id);
	printf("\n Enter the title of book:");
	fflush(stdin);
	gets(b.title);
	printf("\n Enter the price for book");
	scanf("%f",&b.price);
	printf("\n Enter the publisher name of book:");
	fflush(stdin);
	gets(b.p.pubName);
	printf("\n Enter the publisher address:");
	fflush(stdin);
	gets(b.p.pubAddress);

	printf("\n **MENU**\n1.MAGAZINE,\n2.NOVELS,\n3.ENCYCLOPEDEA,\n4.COOKING\n");
	printf("\n Enter your choice");
	scanf("%d",&b.c);
	switch(b.c)
	{
		case 1: printf("\n Category is MAGAZINEs");
			printf("\n Book id=%d",b.book_id);
			printf("\n Title of book=%s",b.title);
			printf("\n Price of book=%f",b.price);
			printf("\n publisher name=%s",b.p.pubName);
			printf("\n publisher address=%s",b.p.pubAddress);
			break;

		case 2: printf("\n Category is NOVELS");
			printf("\n Book id=%d",b.book_id);
			printf("\n Title of book=%s",b.title);
			printf("\n Price of book=%f",b.price);
			printf("\n publisher name=%s",b.p.pubName);
			printf("\n publisher address=%s",b.p.pubAddress);
			break;

		case 3: printf("\n Category is ENCYCLOPEDEA");
			printf("\n Book id=%d",b.book_id);
			printf("\n Title of book=%s",b.title);
			printf("\n Price of book=%f",b.price);
			printf("\n publisher name=%s",b.p.pubName);
			printf("\n publisher address=%s",b.p.pubAddress);
			break;

		case 4: printf("\n Category is COOKING");
			printf("\n Book id=%d",b.book_id);
			printf("\n Title of book=%s",b.title);
			printf("\n Price of book=%f",b.price);
			printf("\n publisher name=%s",b.p.pubName);
			printf("\n publisher address=%s",b.p.pubAddress);
			break;

		default:printf("\n Invalid input");
			break;
	}
}



