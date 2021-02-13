// WAP to display the multiplication table (1-20)
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=2;i<=20;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\n\t",i,j,i*j);
		}
		printf("\n");
	}
	
	getch();
}
