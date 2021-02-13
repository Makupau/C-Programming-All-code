//5)Wap which read salary of 25 employees and count the number of employee who are getting salary between 30,000 to 40,000.
#include<stdio.h>
#include<conio.h>
int main()
{
	int salary[100],i,count=0;
	printf("Enter the salary of 25 employee\n");
	for(i=0;i<=25;i++)
	{
		scanf("%d",&salary[i]);
	}
	for(i=0;i<=25;i++)
	{
	if(salary[i]>=30000&&salary[i]<=40000)
	{
		count++;
	}
	
	}
	printf("The numbers of employee getting salary betn 30000 to 40000 is %d",count);
	getch();
}
