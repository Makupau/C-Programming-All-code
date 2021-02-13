//WAP to find the greatest and smallalest number 
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num[100],small,great,i;
	printf(" enter how many number");
	scanf("%d",&n);
	printf("Enter the  numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	great=num[0];
	small=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]>great)
		{
			great=num[i];
		}
	}
	if(num[i]<small)
	{
		small=num[i];
	}
	printf("The smallest number is %d and greatest number is %d",small,great);
getch();
}
