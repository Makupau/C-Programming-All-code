//1)Wap to input a number and revers it.
#include<stdio.h>
#include<conio.h>
int main()
{
	 int num,rev=0,rem;
	printf("Enter the number");
	scanf("%d",&num);
	while (num!=0)
	{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;	
	}
	printf("Reversed number =%d",rev);
	return(0);
	getch();
	
}
