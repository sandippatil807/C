#include "header.h"
void accept(int a[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter the element of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int a[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}