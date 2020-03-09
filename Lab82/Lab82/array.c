#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr,sum=0,num,i;
	printf("\n Enter the number of subject:");
	scanf("%d",&num);
	ptr=(int*)malloc(num*sizeof(int));
	for(i=0;i<num;i++)
	{
		printf("\n Enter the marks of %dth subject",i+1);
		scanf("%d",(ptr+i));
		sum=sum+(*(ptr+i));
	}
	printf("\n average of %d subjects is %f",num,(float)sum/num);
	getch();
}
