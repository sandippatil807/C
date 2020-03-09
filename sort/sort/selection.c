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
	for(i=0;i<n;i++)
	{
		smallest=i;
		for(j=i+1;j<n;j++)
		{
			if(a[smallest]>a[j])
			{
				smallest=j;

			}
		}
		if(i!=smallest)
		{
			temp=a[smallest];
			a[smallest]=a[i];
			a[i]=temp;
		}
	}
	printf("\n Sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}