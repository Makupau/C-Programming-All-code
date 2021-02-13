//Wap to input any 10 numbers in array and display it. Find the biggest number among the input numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num[100],small,great,i;
	printf("How many integer number enter less then 100\n");
	scanf("%d",&n);
	printf("Enter the number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	small=num[0];
	great=num[0];
	for(i=1;i<n;i++)
	{
		if(num[i]>great)
		{
			great=num[i];
		}
		if(num[i]<small)
		{
			small=num[i];
		}
	}
	printf("Greater is %d among the entered numbers",great);
	getch();
}
