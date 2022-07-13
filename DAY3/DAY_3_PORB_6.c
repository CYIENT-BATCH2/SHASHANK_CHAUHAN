/*      ALGORITHM
Read the number from the user 
read the shift position from user
perform the right shift operation and store the output in variable
print the heaxdecimal using %X format specifier
*/
#include <stdio.h>

int main() {
    int num,X,y;
    printf("Enter the number to be converted :");
    scanf("%X",&num);
    printf("Enter the number of right shift :");
    scanf("%d",&y);
    X=(num>>y);
    
    printf("The hexadecimal value is : %X\n",X);
    
    return 0;
}
