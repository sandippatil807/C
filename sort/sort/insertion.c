#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],n,i,j,smallest,temp;
	printf("\n Enter how many number you want to enter upto 10:");
	scanf("%d",&n);
	printf("\n Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		smallest=a[i];
		for(j=i-1;smallest>a[j] && j>=0;j--)
		{
			
				
				a[i]=a[j];

				
		}
		
	}
	printf("\n Sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}