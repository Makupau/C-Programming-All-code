// WAP to Which is menu driven and which performs as following SUM DIFFERENCE MULTIPLICATION and DIVIDING
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,s,d,m,choice;
	printf("Enter the two number:");
	scanf("%d %d", &a,&b);
	printf("1) add\n");
	printf("2) difference\n");
	printf("3) multiplication\n");
	scanf("%d",choice);
	switch(choice)
	{
		case 1:
			printf("The sum of two number is %d",s=a+b);
		    break;
		case 2:
			printf("the difference of two number is %d",d=a-b);
			break;
		case 3:
			printf("The multiplication of two numbers is %d",m=a*b);
			break;
			defult:
				printf("This is wrong");
	}
	getch();
}
