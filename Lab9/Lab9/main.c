#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,j,sub_num,stud_num,**ptr,marks,sum=0,k,l;
	printf("\n Enter the Number of subject:");
	scanf("%d",&sub_num);
	printf("\n Enter the Number of student:");
	scanf("%d",&stud_num);
	ptr=(int **)malloc(stud_num*sizeof(int*));

	for(i=0;i<stud_num;i++)
	{
		
			ptr[i]=(int *)malloc(sub_num*sizeof(int));
		
	}

	for(i=0;i<stud_num;i++)
	{
		for(j=0;j<sub_num;j++)
		{
			
			printf("\n enter the marks of %dth subject of %dth student",j+1,i+1);
			scanf("%d",&ptr[i][j]);
			sum=sum+ptr[i][j];
			
			
		}				
		printf("\n Average of sub is:%f",(float)sum/sub_num);
		sum=0;
	}
	for(i=0;i<stud_num;i++)
		free(ptr[i]);
	free(ptr);
	getch();
}
	