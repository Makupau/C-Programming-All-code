//Write a program to find the length of string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int l;
	char string[10];
	printf("Enter the string\t");
	gets(string);
	puts(string);
	l=strlen(string);
	printf("The length ko string is %d",l);
	getch();
}
