/*    ALGORITHM
read the value from user and store in variable
if x is 0 print neither odd nor even value
if x modulo with 2 gives remainder 0 then print even  value
else print its odd number
*/


#include <stdio.h>

int main() 
{
    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    if( x == 0)
    {
        printf("0 is neither odd or even\n");
    }
    else if(x % 2 == 0)
    {
        printf("%d is the even number \n",x);
    }
    else 
    {
        printf("%d is the odd number \n",x);
    }
   
    return 0;
}
