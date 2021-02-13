#include<conio.h>
#include<stdio.h>
int main()
{
	float p,t,i;
	printf("Enter the principle and period of time in month");
	scanf("%f%f",&p,&t);
	if(t<6)
	{
		i=(p*t*5)/(100*12);
		printf("The monthly interest is %f",i);
	}
	else if (t>6&&t<12)
	{
		i=(p*t*6)/(100*12);
		printf("The monthly interest is %f",i);
	}
	else
	{
		i=(p*t*10)/(100*12);
		printf("The monthly interest is %f",i);
	}
	getch();
}
