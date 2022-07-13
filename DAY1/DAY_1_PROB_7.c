#include <stdio.h>

int main() 
    {
    int i,j,rev=0;
    printf("Please enter the digit : ");
    scanf("%d",&i);
    j = i;
    loop : if(i>0)
    {
        rev = rev * 10 + i % 10;
        i = i / 10;
        if(i>0)
        {
            goto loop;
        }
    }
    printf("The reverse of the digit is %d \n",rev);
    if( j == rev)
    {
        printf("The number is an palindrome \n");
    }
    else
    {
        printf("The number is not a palindrome \n");
    }
    
    return 0;
}
