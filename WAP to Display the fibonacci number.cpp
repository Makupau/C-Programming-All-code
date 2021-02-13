#include<stdio.h>
#include<conio.h>
void fibonacci (int n);
int main()
{
	int n;
	printf("how many fibonacci number");
	scanf("%d",&n);
	fibonacci (n);
	getch();
}
void fibonacci (int n)
{
	int i,c,a=1,b=1;
	printf("%d\t%d\t",a,b);	
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
	    b=c;
	}
}
