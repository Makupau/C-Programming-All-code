//write a program to claculate area of pond using user define function
#include<stdio.h>
#include<conio.h>
int area(int length,int breath);        //function defination
int main()
{
	int length,breath,area;
	printf(" length and breath of pond\n");
	scanf("%d%d",&length,&breath);
	area=(length,breath);                //function call
	printf("The area of pond is %d",area);
	getch();
}

int area(int l, int b)                // function parameter
{
	int a;
	a=(l*b);
	return (a);         // returning a value of a in area
}
