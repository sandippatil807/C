#include "header.h"

void main()
{
	int  num;
	char **ptr=NULL;
	printf("\n Enter the number of students:");
	scanf("%d",&num);
	search(num,ptr);
	getch();

}
