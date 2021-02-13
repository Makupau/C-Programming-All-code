#include<stdio.h>
#include<conio.h>

int main()
{
int temp, arm=0,a,b,c,d,num; 
printf("Enter any number: ");
scanf("%d",&num);
temp=num;
while(temp>0)
{
a=temp%10;
temp=temp/10;
arm=arm+a*a*a;
}
if(arm==num)
{
printf("%d is armstrong number",num);
}
else
{
printf("%d is not armstrong number", num);
}
getch();
}
