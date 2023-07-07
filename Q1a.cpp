/*1.	Write a C program to calculate the length of a string.  */
#include <stdio.h>
main()
{
	char string[]="Welcome to C";
	printf("The string is:\n");
	puts(string);
	int len=0;
	while(string[len]!='\0')
	{
		len++;
	}
	printf("\nThe length of string (%s) is %d",string,len);
}