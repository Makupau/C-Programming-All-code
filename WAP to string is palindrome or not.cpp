// WAP to string is palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char string1[10],string2[10];
	printf("Enter the string\n\n");
	scanf("%s",string1);
	strcpy(string2,string1);
	strrev(string2);

	if(strcmp(string2,string1)==0)
	{
		printf("String %s is in palindrome",string1);
	}
	else
	{
		printf("String %s is not palindrome",string1);
	}

	return(0);
	getch();
}
