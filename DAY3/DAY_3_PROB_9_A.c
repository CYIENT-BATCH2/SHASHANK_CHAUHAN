/*    ALGORITHM
Read the hexadecimal value from user
run the loop using goto till it becomes zero
right shifting the bit and with 1 will give the bit by bit value
print the value will give binary value
*/


#include <stdio.h>

int main() {
    int x,y=8,z;
    printf("Enter the Hexadecimal number : ");
    scanf("%X",&x);
    printf("The binary value is : ");
    loop:
    if(y--)
    {
        z = (x>>y) & 01;
        printf("%d ",z);
        goto loop;
    }
    return 0;
}
