#include<stdio.h>
#include<conio.h>
int main()
{
	int computer,math,account,economic,english;
	int percentage,i;
	printf("Enter the mark of student in computer,math,account,economic,english respictively");
	scanf("%d%d%d%d%d",&computer,&math,&account,&economic,&english);
	percentage=((computer+math+account+economic+english)/5);
	if(computer<35||math<35||account<35||economic<35||english<35)
	{
		printf("You are fail");
	}
	else if(percentage>=60)
	{
		printf("First division");
	}
	else if(percentage<=59&&percentage>=45)
	{
		printf("Second division");
	}
	else if(percentage<=44&&percentage>=35)
	{
		printf("Third division");
	}
	else
	{
		printf("You are fail");
	}
	getch();
	return(0);
}
