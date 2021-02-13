//WAP to sorting the entered number
#include<stdio.h>
#include<conio.h>
void sort(int arr[]);
int main()
{
	int arr[10],i;
	printf("Enter the 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr);
	getch();
}
void sort(int arr[])
{
	int i,j,temp;
	for(i=0;i<arr[10]-1;i++)
	{
		for(j=i+1;j<arr[10];j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
printf("The number in ascending order is\n");
for(i=0;i<arr[10];i++)
{
	printf("\n%d",arr[i]);
}
}
