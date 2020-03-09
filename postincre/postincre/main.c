#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[]="food";
	int len;
	len=strlen(str);
	while(len)
		printf("%c",str[len--]);
	getch();
}
