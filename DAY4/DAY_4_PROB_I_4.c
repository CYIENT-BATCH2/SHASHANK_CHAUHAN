/*    ALGORITHM
Read the value from the user
using the bitwise the and operation on num and num-1 are complements to each other it will give 0 on AND operation
and AND with the num we give true condition so
print its power of 2
else print not power of 2
*/


#include<stdio.h>

int main() 
{
    int num;
     
    printf("Enter an integer\n");
    scanf("%d", &num);
     
    if(num && ((num & (num-1)) == 0))
    {
        printf("%d is power of 2", num);
    } 
    else 
    {
        printf("%d is not a power of 2", num);
    }
 
    return 0;
}
