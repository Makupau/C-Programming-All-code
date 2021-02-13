#include<stdio.h>
#include<conio.h>
long int factorial(int n);
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	printf("The factorial is %d",factorial(n));
	getch();
}
long int factorial(int n)
{
	if(n<1)
	{
		return(1);
	}
	else
	return(n*factorial(n-1));
}
