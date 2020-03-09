#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr,*dptr,*sptr;
	char ch;
	int size,count=0;
	ptr=fopen("temp.txt","r");
	dptr=fopen("first.txt","w");
	sptr=fopen("second.txt","w");
	if(ptr==NULL)
	{
		printf("\n File can not exists");
		exit(1);
	}
	
	printf("\n Enter size of first file");
	scanf("%d",&size);
	while((ch=fgetc(ptr))!=EOF)
	{
		fprintf(dptr,"%c",ch);
		count++;
		if(size==count)
			break;
	}

		while((ch=fgetc(ptr))!=EOF)
		{
			fprintf(sptr,"%c",ch);
		
		}
		
	if(rename("second.txt","temp.txt")==0)
	{
		if(remove("second.txt")==0)
		{
			printf("\n file deleted");
		}
	}
	
	printf("\n Process completed successfully");
	fclose(ptr);
	fclose(dptr);
	fclose(sptr);
	getch();
}
		



