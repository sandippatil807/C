#include "header.h"

void compare(char str[],char str1[])
{
	int i,len;
	for(i=0;str[i]==str1[i];i++)
	{
		if(str[i]=='\0')
		len=0;
	}
	
	if(len==0)
	{
		printf("\n Both strings are equals");
		break;
	}
	len=str[i]-str1[i];
	if(len>0)
		printf("\n %s is greater",str);
	else if(len<0)
		printf("\n %s is greater",str1);
	
}



void concatenation(char str[],char str1[])
{
	int i,len;
	len=strlen(str);

	for(i=0;(str[len]=str1[i])!='\0';i++)
	 len++;
	printf("\n After concatenation is %s",str);
}

void copy(char str1[])
{
	int j=0;
	char str[20];
	while((str[j]=str1[j])!='\0')
		j++;
	printf("\n After copy destination string is:%s",str);
}