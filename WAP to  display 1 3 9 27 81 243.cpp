//WAP to  display 1 3 9 27 81 243
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n=1;
	for(i=1;i<=6;i++)
	{
		printf("%d\t",n);
		n=n*3;
	}
	
	getch();
}
