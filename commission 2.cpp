#include<stdio.h>
#include<conio.h>
int main()
{
	int sales,comm;
	printf("enter sales amount");
	scanf("%d",&sales);
	if(sales<=1000)
	{
		comm=sales*5/100;
	}
	else if(sales>=1001&&sales<=2000)
	{
		comm=sales*10/100;
	}
	else if(sales>=2000)
	{
		comm=sales*12/100;
	}
	printf("Your commission is Rs: %d",comm);
	getch();
}
