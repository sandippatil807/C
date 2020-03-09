#include "header.h"

void accept(int (*p)[3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter element of" );
			scanf("%d",(*(p+i)+j));
		}
	}
}

void display(int (*p)[3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}

	printf("\n Transpose of matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			printf("%d\t",*(*(p+j)+i));
		}
		printf("\n");
	}
}