#include "header.h"

void accept(int (*p)[3],int (*q)[3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter element of a[%d][%d]",i,j);
			scanf("%d",(*(p+i)+j));
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter element of a[%d][%d]",i,j);
			scanf("%d",(*(q+i)+j));
		}
	}
}

void display(int (*p)[3],int (*q)[3])
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

	
}

void addition(int (*p)[3],int (*q)[3])
{
	
	int i,j;
	printf("\n Addition of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",(*(*(p+i)+j))+(*(*(q+i)+j)));
		}
		printf("\n");
	}

	
}
