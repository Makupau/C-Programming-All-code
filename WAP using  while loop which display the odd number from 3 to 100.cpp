//WAP using  while loop which display the odd number from 3 to 100
#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	for (i=2;i<100;i++)
	 {
	 	
	 while(i%2==0)
	 {
	 i++;
		printf("%d\t",i);
	 }
    }
    getch();
}
