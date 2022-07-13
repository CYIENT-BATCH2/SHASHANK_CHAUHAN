/*    ALGORITHM
Read two value from user and store it in variable
Check if x is geater than y
print x is greater
else print y is greater
*/


#include <stdio.h>

int main() 
{
    int x ,y ;
    printf("Enter value of x and y respectively ");
    scanf("%d%d",&x,&y);
    if(x > y)
    {
        printf("x is the biggest number \n");
    }
    else
    {
        printf("y is the biggest number \n");
    }
   
    return 0;
}
