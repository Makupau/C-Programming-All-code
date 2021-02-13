/* WAP which finds the sum difference and product of 2 numbers using switch case statenment*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,s,d,p,choice;
	printf("enter the 2 number");
	scanf("%d %d",&a,&b);
	printf("1= add\n");
	printf("2= substract\n");
	printf("3= multiply\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			s=a+b;
			printf("The sum is %d",s); 
			break;
	
	    case 2:
	    	d=a-b;
	    	printf("the difference is %d",d);
	    	break;
	    case 3:
			p=a*b;
			printf("The product is %d",p);
			break;
			
    }
    getch ();
}
