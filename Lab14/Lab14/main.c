#include "header.h"
void main()
{
	BOOK b1={1000,"Nilima",30000};
	BOOK b2,b3;
	printf("\n On element by element basis:");
	b2.bookId=b1.bookId;
	b2.price=b1.price;
	strcpy(b2.title,b1.title);
	printf("\n Book ID of b2 is:%d",b2.bookId);
	printf("\n Title of book is:");
	puts(b2.title);
	printf("\n price of b2 is:%f",b2.price);


	printf("\n Copying entire structure to another:");
	b3=b1;
	printf("\n Book ID of b2 is:%d",b3.bookId);
	printf("\n Title of book is:");
	puts(b3.title);
	printf("\n price of b2 is:%f",b3.price);

	getch();
}