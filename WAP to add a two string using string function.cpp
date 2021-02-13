//WAP to add a two string using string function.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[10],b[10],i;
	printf("Enter the half of the string\n");
	scanf("%s",&a);
	printf("Enter the another half string\n");
	scanf("%s",&b);
	puts(a);
	puts(b);
	strcat(a,b);
	puts(a);
	getch();
}
