//2)Wap to print multipatication table of 1 to 10.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	for(i=1;i<=10;i++)
	{
		printf("\t");
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d",i,j,i*j);
			printf("\n");

		}
	}
	getch();
}
