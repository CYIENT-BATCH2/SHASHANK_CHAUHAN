/*    ALGORITHM
Read the input from user
if value is 0 print neither even nor odd number
if value is greater then 0 print positive number
else print it is negative number
*/


#include <stdio.h>

int main() 
{
    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    if(x == 0)
    {
        printf("0 is the neither positive nor negative number \n");
    }
    else if(x > 0)
    {
        printf("%d is the positive number \n",x);
    }
    else
    {
        printf("%d is the negative number \n",x);
    }
   
    return 0;
}
