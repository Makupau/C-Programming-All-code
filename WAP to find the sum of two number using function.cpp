//AP to find the sum of two number using function
#include<stdio.h>
#include<conio.h>
int product(int a,int b);
int main()
{
	int a,b;
	product(a,b);
	return(0);
	getch();
}
int product(int a,int b)
{
	int s=a+b;
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	s=a+b;
	printf("The product is %d",s);
	return(0);
}
