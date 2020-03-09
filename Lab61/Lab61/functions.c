#include "header.h"


void occurrences(char s[])
{
	char ch,i=0,count=0;
	printf("\n Enter the character to search occurrences:");
	fflush(stdin);
	scanf("%c",&ch);
	while(s[i]!='\0')
	{
		if(ch==s[i] || ch-32==s[i] || ch+32==s[i])
			count++;
		i++;
	}
	printf("\n Number of occurences of %c is:%d",ch,count);
}

void blankspaces(char s1[])
{
	int i=0,count=0;
	while(s1[i]!='\0')
	{
		if(s1[i]==' ')
			count++;
		i++;
	}
	printf("\n Number of spaces in string:%d",count);
}




void words(char s2[])
{

	int i=0,count=0;
	while(s2[i]!='\0')
	{
		if(s2[i]==' ')
			count++;
		i++;
	}
	printf("\n Number of words in string:%d",count+1);

}


void vowels(char s3[])
{
	int i=0,count=0;
	while(s3[i]!='\0')
	{
		if(s3[i]=='A' || s3[i]=='a' || s3[i]=='E' || s3[i]=='e' || s3[i]=='I' || s3[i]=='i' || s3[i]=='O' || s3[i]=='o' || s3[i]=='U' || s3[i]=='u')
		{
			count++;
		}
		i++;
	}
	if(count==0)
		printf("\n Sorry no vowels in string...");
	else
		printf("\n Vowels in string are:%d",count);
}