#include<stdio.h>
#include<conio.h>
int main()
{
	long int fact=1;
	int i,n;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("factorial is %ld",fact);
	getch();
	return(0);
}
