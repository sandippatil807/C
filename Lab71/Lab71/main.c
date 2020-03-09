#include "header.h"

void main()
{
	int ch,len1;
	char ch1;
	char str[20],str1[20];
	do
	{
		printf("\n ***MENU***");
		printf("\n1:Compare\n2:concatenation\n3:copy\n4:Exit");
		printf("\n Enter your choice");
		fflush(stdin);
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:printf("\n Enter 1st string:");
				fflush(stdin);
				gets(str);
				printf("\n Enter 2nd string");
				fflush(stdin);
				gets(str1);
				compare(str,str1);
				
				break;

			case 2:printf("\n Enter 1st string:");
				fflush(stdin);
				gets(str);
				printf("\n Enter 2nd string");
				fflush(stdin);
				gets(str1);
				concatenation(str,str1);
				break;

			case 3:
				printf("\n Enter source string");
				fflush(stdin);
				gets(str1);
				copy(str1);
				break;
		}
		printf("\n Do you want to continue?");
		scanf("%c",&ch1);
	}while(ch1=='Y' || ch1=='y');
	getch();
}
	