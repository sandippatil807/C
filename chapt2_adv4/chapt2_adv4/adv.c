#include<stdio.h>
#include<conio.h>


void main()
{
	int i=1,j=80;
	while(1)
	{
		printf("%*s",i,"HI");
		printf("%*s",j,"HELLO");
		i++;
		j=j-2;
		system("cls");
		if(i==40)
			break;
	}
	printf("%41s","BYE");
	printf("\n\n");
	getch();
}