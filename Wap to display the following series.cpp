/* Wap to display the following series 
    2     3     4        
x+ x   + x   + x  +......to n term.
   2     3     4
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i,n;
float x,sum=0;

printf("x + x^2/2 + x^3/3 +........ + x^n/n\n");
printf("Enter value of x and n:");
scanf("%f%d",&x,&n);
for(i=1;i<=n;i++)
sum=sum+pow(x,i)/i;
printf("sum=%f",sum);
getch(); 
}


