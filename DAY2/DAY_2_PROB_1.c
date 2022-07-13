#include <stdio.h>

int main() 
{
    int n,x=0;
    printf("Please enter the mobile number: ");
    scanf("%d",&n);
    loop:
    if(n != 0)
    {
        x = x + n % 10;
        n = n/10;
        if(n>0)
        {
            goto loop;
        }
    }
    printf("The sum of mobile number is %d",x);
   
    return 0;
}
