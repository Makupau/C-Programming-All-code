#include<stdio.h>
#include<conio.h>
int main()
{
	int number[100],i,sum=0;
	printf("Enter the 10 numbers");
	for(i=1;i<=10;i++)
	{	
	scanf("%d",&number[i]);
	sum=sum+number[i];
	}
	printf("The sum of 10 numbers is %d",sum);
	getch();
}
