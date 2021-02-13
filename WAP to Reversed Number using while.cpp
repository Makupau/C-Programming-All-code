//WAP to Reversed Number
#include <stdio.h>
#include<conio.h>
int main()
{
    int n, r = 0, rem;
    printf("Enter any two or >2 digit number");
    scanf("%d", &n);
    while(n != 0)
    {
        rem = n%10;
        r = r*10 + rem;
        n /= 10;
    }
    printf("Reversed Number = %d", r);
    return 0;
    getch();
}
