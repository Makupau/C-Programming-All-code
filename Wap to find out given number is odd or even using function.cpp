// Wap to find out given number is odd or even using function
#include<stdio.h>
#include<conio.h>
int check(int num);

int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	check(n);
	printf("The number is even");
    printf("The number is odd");
	getch();
}
int check(int num)
int b,c;
{
	if(num%2==0)
	{
	 
		printf("The number is even");	
	}
	else
	{
	
	printf("The number is odd");
	}
}

