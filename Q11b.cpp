/*11.	Enter a number and find whether its binary is palindrome or not.   */
#include <stdio.h>
bool palindrome(char a[],int length);
main()
{
	int size=50;
	char str[size];
	printf("Enter the string :\n");
	gets(str);
	printf("The string is:\n");
	puts(str);
	int length=0;
	while(str[length]!='\0')
	{
		length++;
	}
	if(palindrome(str,length))  // bool function call 
    {
    	printf("\nThe string(%s) is palindrome:",str);
	}
	else
	{
	printf("\nThe string(%s) is not palindrome:",str);	
	}
	
}
bool palindrome(char a[],int size)
{
	int first=0;  // index 
	int last=size-1;   // index
	while(first<=last)
	{
		if(a[first]!=a[last])
		{
			return false;
		}
		first++;
	    last--;
	}
	return true;
}