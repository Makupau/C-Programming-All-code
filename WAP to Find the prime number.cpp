/*Wap to find the entered number prime number or  number */
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,count=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime number");
	}
	else
	{
		printf("not prime");
	}
getch();
}
