/*    ALGORITHM
Read the value from the user and store in variable
enter the bit to be set by the user
perform the set bit using the bitwise OR by shifting
the 1 by that position and or with the original value 
will get new value print its value
*/


#include <stdio.h>

int main() 
{
    int x,y,res;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter the bit position to be set: ");
    scanf("%d",&y);
    res = x | (1 << (y-1));

    printf("The value after setting the bit is %d \n",res);

    return 0;
}
