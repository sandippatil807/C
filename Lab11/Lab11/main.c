#include "header.h"

void main()
{
	BOOK b1;
	printf("\n Enter book ID");
	scanf("%d",&b1.bookId);
	printf("\n Enter title for book:");
	fflush(stdin);
	gets(b1.title);
	printf("\n Enter the price of book:");
	scanf("%f",&b1.price);
	
	printf("\n book ID=%d",b1.bookId);
	printf("\n title for book:%s",b1.title);
	printf("\n price of book:%f",b1.price);

	getch();
}