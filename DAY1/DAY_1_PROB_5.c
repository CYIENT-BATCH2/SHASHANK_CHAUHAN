#include <stdio.h>

int main() 
{
    int a,b,c,d,e;
    printf("Please assign value to five ball respectively:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if (a % 2 ==0)
    {
        printf("The assign value to ball one is even\n");
    }
    else
    {
        printf("The assign value to ball one is odd\n");
    }
    if (b % 2 ==0)
    {
        printf("The assign value to ball two is even\n");
    }
    else
    {
        printf("The assign value to ball two is odd\n");
    }
    if (c % 2 ==0)
    {
        printf("The assign value to ball three is even\n");
    }
    else
    {
        printf("The assign value to ball three is odd\n");
    }
    if (d % 2 ==0)
    {
        printf("The assign value to ball four is even\n");
    }
    else
    {
        printf("The assign value to ball four is odd\n");
    }
    if (e % 2 ==0)
    {
        printf("The assign value to ball five is even\n");
    }
    else
    {
        printf("The assign value to ball five is odd\n");
    }
    return 0;
}
