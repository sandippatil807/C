#include "header.h"

int * xstrchr(char str[30],char ch)
{
	int *ptr=NULL,occur=0,i=0;
	while(i<strlen(str))
	{
		if(str[i]==ch || str[i]==ch+32)
		{
			occur++;
			break;
			
		}
		i++;
	}
	if(occur)
	{
		ptr=&i;

		return ptr;
	}
	else
		return ptr;
}