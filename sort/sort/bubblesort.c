#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,j,temp,n;
	printf("\n Enter how many number you want ot enter?:");
	scanf("%d",&n);
	printf("\n Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n Sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
