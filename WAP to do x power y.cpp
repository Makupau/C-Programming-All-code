/*WAP to do x power y*/
#include <stdio.h>
#include<conio.h>
int main()
{
    int x, y,a=1;
    
    printf("Enter the value of x and y ");
    scanf("%d %d", &x,&y);
    while (y>= 1)
    {
        a=a*x;
        y--;
    }
    printf(" the result is %d", a);
    return 0;
    getch();
}
