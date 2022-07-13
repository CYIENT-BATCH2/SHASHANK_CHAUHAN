/*      ALGORITHM
READ the value from the user 
run the loop the if loop becomes zero 
doing right shift and and with 1
printing the bit by bit value will give its binary value
and using format specifier using %X will get Hexadecimal value
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
    printf("\n");
    printf("The decimal value of the number is %d",x);
    return 0;
}
