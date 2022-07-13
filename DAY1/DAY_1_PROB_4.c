#include <stdio.h>

int main() 
{
    int n,j=0;
    printf("Please enter six digit not containing zero:");
    scanf("%d",&n);
    if (n > 111111 && n< 999999)
    {
    loop:
    if(n>0)
    {
        j = j * 10 + n % 10;
        n = n/10;
        if(n>0)
        {
            goto loop;
        }
        
    printf("The reverse of the number is: %d",j);
    
    }
    else
    {
        printf("not in range\n");
    }
    return 0;
    }
}
