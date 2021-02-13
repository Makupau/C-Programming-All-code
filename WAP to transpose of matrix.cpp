//WAP to transpose of matrix
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[10][10],m,n;
	printf("Enter the number of row and column of matrix");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	/*transpose of the matrix*/
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<m;j++)
		{
			printf("%d\t%d",a[j][i]);
		}
	}

getch();
}
