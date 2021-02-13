// Write a program to sum of two matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
	int x[10][10],y[10][10],sum[10][10],i,j;
	printf("Enter the elements of first matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d%d",&x[i][j]);
		}
	}
	printf("Enter the elements of second matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d%d",&y[i][j]);
		}
	}
	printf("\n the sum of 2 matrix is \n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			sum[i][j]=x[i][j]+y[i][j];
			printf("%d\t",sum[i][j]);
		}
	}
	getch();
}
