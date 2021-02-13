#include<stdio.h>
#include<conio.h>
int main()
{
	int j,k;
	for(j=5;j>=1;j--)
	{
		for(k=1;k<=j;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
	
}
