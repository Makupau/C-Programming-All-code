//Write a program to input name roll and class of 10 students using structure and display 
#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	struct student
	{
		char name[20];
		int roll;
		int grade;
	}st[10];
	
	for(i=1;i<=10;i++)
	{
		printf("Enter the name,roll and class of student %d",i);
		scanf("%s%d%d",st[i].name,&st[i].roll,&st[i].grade);
		printf("The name is %s\n The roll no is %d\n The class is %d\n",st[i].name,st[i].roll,st[i].grade);
	}
	getch();
	return (0);
}
