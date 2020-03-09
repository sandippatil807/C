#include "header.h"

void search(int num,char **ptr)
{
	char temp[20],name[20];
	int i,flag=0;
	
	ptr=(char **)malloc(num*sizeof(int*));
	for(i=0;i<num;i++)
	{
		printf("\n Enter %dth student names :",i+1);
		fflush(stdin);
		gets(temp);
		ptr[i]=(char *)malloc(strlen(temp)+1);
		strcpy(ptr[i],temp);
	}
	printf("\n Student names which we accepted:");
	
	for(i=0;i<num;i++)
	{
		puts(ptr[i]);
	}
	printf("\n Enter student name which you want to search:");
	fflush(stdin);
	gets(name);
	for(i=0;i<num;i++)
	{
		if(strcmp(ptr[i],name)==0)
			flag++;
	}
	if(flag>0)
		printf("\n %s student is found",name);
	else
		printf("\n %s student not found",name);

}

