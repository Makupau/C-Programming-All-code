#include<stdio.h>
#include<conio.h>
int main()
{
	long int n,r,count=0;
	printf("Enter the number");
	scanf("%ld",&n);
	do
	{
		n=n/10;
		count++;
	}
	while(n!=0);
	{
	 printf("There are %ld number of digits",count);
    }
	getch();
}
