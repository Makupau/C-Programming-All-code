//WAP to input 10 integer numbers into array and display the sum of the number
#include<stdio.h>
#include<conio.h>
int main()
{
	int number[10],sum=0,i;
	printf("Enter 10 numbers");
	scanf("%d",&number[0]);
	for(i=0;i<=10;i++)
	{
	     sum=sum+i;
	     printf("The sum of 10 integer is %d",sum);
	}
	getch();
}
