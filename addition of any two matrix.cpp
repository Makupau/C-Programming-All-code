//3)Wap to find addition of any two matrix of size 2*2 using array
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],i,j;
	printf("Enter the elements of first (2*2) matrix");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of second (2*2) matrix");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n The sum of 2 matrix is \n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("\n\t");
			sum[i][j]=a[i][j]+b[i][j];
			printf("\n\t%d\t",sum[i][j]);
		}
	}
}
