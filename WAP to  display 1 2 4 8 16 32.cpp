//WAP to  display 1 2 4 8 16 32
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n=1;
	for(i=1;i<=6;i++)
	{
		printf("%d\t",n);
		n=n*2;
	}
	
	getch();
}
