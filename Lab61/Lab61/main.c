#include "header.h"

void main()
{
	char str[20];
	printf("\n Enter the String:");
	gets(str);
	occurrences(str);
	blankspaces(str);
	words(str);
	vowels(str);
	getch();
}