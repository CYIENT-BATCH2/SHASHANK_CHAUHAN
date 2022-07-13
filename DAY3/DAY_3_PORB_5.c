/*      ALGORITHM
Read the hexadecimal value and store it in variable
just use bitwise right shift by 3
again print the value after shifting operation
*/
#include <stdio.h>

int main() {
    int num,X;
    printf("Enter the Heaxdecimal number to be converted :");
    scanf("%X",&num);
    X=(num>>3);
    
    printf("The hexadecimal value after shift operation is : %X\n",X);
    
    return 0;
}
