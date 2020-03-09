#include "header.h"
void main()
{
	BOOK b1[5];
	int i;
	for(i=0;i<5;i++)
	{
		accept(&b1[i]);
	}
	display(b1);
	getch();
}

