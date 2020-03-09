#include "header.h"

void main()
{
	char a[30],ch;
	int *ptr;
	
	printf("\n Enter the string  ");
	gets(a);
	printf("\n Enter the character which u want to search  ");
	fflush(stdin);
	scanf("%c",&ch);

	ptr=xstrchr(a,ch);
	if(ptr!=NULL)
	{
		printf("%c character is at position %d of string %s  ",ch,*ptr+1,a);
	}
	else
	{
		printf("\n Character not found in string  ");
	}
	getch();
}