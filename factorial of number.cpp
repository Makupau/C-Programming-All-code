//4)Wap to generate factorial of a given number using recursive function.
#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	printf("Factorial is %d",factorial (n));
	getch();
}
int factorial(int n)
{
	if(n<=1)
	return(1);
	else
	return(n*factorial(n-1));
}
