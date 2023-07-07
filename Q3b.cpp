/* 3.	Write a C program to add 'ing' at the end of a given string (length should be at least 3). If the given string already ends with 'ing' then add 'ly' instead. If the string length of the given string is less than 3, leave it unchanged. 
Sample String : 'abc' Expected Result : 'abcing'        Sample String : 'string'   Expected Result : 'stringly'  */
#include <stdio.h>
#include <string.h>
main()
{
	int size=50;
	char str[size];
	printf("Enter the string :\n");
	gets(str);
	printf("The string is:\n");
	puts(str);
	printf("The new string is after modification:\n");
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}
	if(len<3)
	{
	puts(str);
	}
	else
	{
    if(strcmp(&str[len-3],"ing")==0)
	{
		printf("%sly",str);
	}
	else
	{
	printf("%sing",str);	
	}
}
}
