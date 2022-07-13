/*    ALGORITHM
TWO variable with value assign is printed before swapping
store the sum of x and y in x
now geting the value of y but subtracting the x from total sum
similarly getting the value of x by subtracting the y value from previous operation and subtracting from sum
will get the swpped value without using 3rd variable
*/

#include <stdio.h>

int main() 
{
    int x = 10,y = 20   ;
    printf("Before swapping the value of x = %d and y = %d\n",x,y);
    x = x + y;
    printf("%d",x);
    y = x - y;
    x = x - y;
    printf("After swapping the value of x = %d and y = %d\n",x,y);
    
    return 0;
}
