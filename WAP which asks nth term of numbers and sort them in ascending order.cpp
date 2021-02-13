// WAP which asks nth term of numbers and sort them in ascending order
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n[100],i,j,temp;
	printf("How many numbers are there\n");
	scanf("%d",&num);
	printf("Enter tha numbers\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&n[i]);
	}
//shorting routing
for(i=0;i<num-1;i++)
{
	for(j=i+1;j<num;j++)
	{
		if(n[i]>n[j])
		{
			temp=n[i];
			n[i]=n[j];
			n[j]=temp;
		}
	}
}
printf("The number in ascending order are\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",n[i]);
	}
	getch();
}
