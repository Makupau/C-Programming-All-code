// DAY (1)
// Wap to input length and breadth of a pond and find the area  by using user define function

#include<stdio.h>
#include<conio.h>
int area(int length,int breadth);    // function  prototype
int main()
{
	int length ,breadth,b;
	printf("Enter length and breadth");
	scanf("%d %d",&length ,&breadth);
	 b=area( length,breadth);             // function call
	printf("The area is %d",b);
	getch();
}
int area(int length,int breadth) // function define
{
	int a;
	a=(length*breadth);
	return (a);
}
