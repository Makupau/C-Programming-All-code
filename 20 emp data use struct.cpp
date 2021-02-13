//Write a program to enter the 20 employees name age and salary using structure and display them
#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	struct employee
	{
		char name[20];
		int age;
		int salary;
	}em[10];
	
	for(i=1;i<=3;i++)
	{
		printf("Enter the name,age ,and salary of employee %d",i);
		scanf("%s%d%d",&em[i].name,&em[i].age,&em[i].salary);
		printf("The name is %s\n The roll no is %d\n The regno is %d\n",em[i].name,em[i].age,em[i].salary);
	}
	getch();
	return (0);
}
