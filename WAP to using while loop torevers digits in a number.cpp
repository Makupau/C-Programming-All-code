//WAP to using while loop torevers digits in a number
#include <stdio.h>
#include<conio.h>
int main()
{
    int n, r = 0, rd;
    printf("Enter an number ");
    scanf("%d", &n);
    while(n != 0)
    {
        rd = n%10;
        r=r*10+rd;
        n=n/10;
    }
    printf("Reversed Number = %d", r);
    return 0;
    getch();
}
