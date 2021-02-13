//WAP to find the side of triangle
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the three side of triangle",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	if (a==b&&b==c&&c==a)
	{
		printf("This is equilator triangle:");
	}
	else if (a==b&&b!=c&&c!=a)
	{
		printf("This is isoceless triangle");
	}
	else if(a!=b&&b!=c&&c!=a)
	{
		printf("This is scaletor triangle");
	}
	getch();
}
