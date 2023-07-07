/* 2.	Write a C program to count the number of characters (character frequency) in a string.
Sample String : google.com'
Expected Result : {'o': 3, 'g': 2, '.': 1, 'e': 1, 'l': 1, 'm': 1, 'c': 1} */
 #include <stdio.h>
main()
{
	int size=20;
	
	char string[size];
	printf("Enter the string :\n");
	gets(string);
	printf("The string is:\n");
	puts(string);
	for(char i='A';i<'z';i++)
	{
		int occ=0;
		for(int j=0;j<size;j++)
		{
			if(string[j]==i)
			{
				++occ;	
			}
		}
		if(occ>0)
		{
		printf("'%c': %d,",i,occ);	
		}				
	}
}