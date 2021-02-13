//WAP to make a calculater using switch case
#include<stdio.h>
#include<conio.h>
int main()
{
	int choice,a,b,z;
	printf("enter any two number");
	scanf("%d%d",&a,&b);
	printf("1) sum two number\n");
	printf("2) subtract two number\n");
	printf("3) multiply two number\n");
	printf("4) divide two number\n");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("the sum is %d\t",a+b);
			break;
		case 2:
			printf("the difference is %d\t",a-b);
			break;
		case 3:
			printf("the multiply is %d\t",a*b);
			break;
		case 4:
			printf("the divide is %d\t",a/b);
			break;
		defult:
			printf("wrong choice\t");
			break;
	
	}
	
}
