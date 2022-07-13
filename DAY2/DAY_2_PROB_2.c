#include <stdio.h>

int main()
{
    int sum,j,i = 8;
    printf("Enter the two digit number: ");
    scanf("%d",&j);
    printf("The binary value is: ");
    loop:
    if(i--)
    {
       printf("%d ",(j >> i) & 1);
       
       if(i>0)
       {
           goto loop;
       }
    }
    return 0;
}
