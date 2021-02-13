/*
WAP that accepts principle and time calculate the simple interest according to the following rates

  Duration            interest rate
  Up to 6 Months       8%
  Up to 12 Months      9%
  Up to 18 Months      9.5%
  More than 5 Years    12%
  */
#include<stdio.h>
#include<conio.h>
int main()
  {
  	int principle;
  	float time,si;
  	printf("Enter the principle\n");
  	scanf("%d",&principle);
  	printf("Enter the  time in month\n");
  	scanf("%f",&time);
  	if(time<=6)
  	{
  		si=(principle*time*8)/100;
  		printf("Your simple interest is %f",si);
	  }
    else if(time<=12)
  	{
  		si=(principle*time*9)/100;
  		printf("Your si is %f",si);
	  }
	else if(time<=18)
  	{
  		si=(principle*time*9.5)/100;
  		printf("Your simple interest is %f",si);
	  }
	  else if(time<=60)
  	{
  		si=(principle*time*10.5)/100;
  		printf("Your simple interest is %f",si);
	  }
	  else
  	{
  		si=((principle*time*12)/100);
  		printf("Your simple interest is %f",si);
	  }
	  getch();
  }
