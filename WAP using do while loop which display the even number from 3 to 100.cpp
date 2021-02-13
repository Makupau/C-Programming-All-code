//WAP using do while which display the even number from 3 to 100
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	for(n=1;n<100;n++)
	{
		do
		{
			n++;
			printf("%d\t",n);
		}
		while(n%2==1);
		
	}
	getch();
}
