/*    ALGORITHM
Read the input form user
read the bit to be clear from he user
AND the number with the user bit which is to clear by setting remaining as 1 
store the value and print it .
*/
#include <stdio.h>

int main() 
{
    int x,y,res;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter the bit position to be set: ");
    scanf("%d",&y);
    res = x & (~(1 << (y - 1)));
    
    
    printf("The value is %d \n",res);
    
   
    return 0;
}
