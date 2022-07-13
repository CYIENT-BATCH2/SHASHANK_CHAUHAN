/*      ALGORITHM
Read the value from the user from user and store it in variable
read the bit to be complment from the user
shifting the bit left side by position and complemnting with the original value
print the value
*/



#include <stdio.h>

int main() 
{
    int x,y,res;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter the bit position to be complement: ");
    scanf("%d",&y);
    res = x ^ (1 << (y - 1));
    
    
    printf("The value is %d \n",res);
    
   
    return 0;
}
