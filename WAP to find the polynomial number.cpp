//WAP to find the polynomial number 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,d,r1,r2; 
	printf("Enter the value of a b c");
	scanf("%d %d %d",&a,&b,&c);
	d=sqrt(b*b-4*a*c);
	r1=(-b+d)/(2*a);
	r2=(-b-d)/(2*a);
	printf("The two root of polynomial are %d and %d",r1,r2);
	getch();
}
