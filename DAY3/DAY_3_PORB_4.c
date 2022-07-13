/*        ALGORITHM
Read the input from the user and store it in the variable
We can print hexadecimal value using format specifier %X for integer value
to print the binary we will use bitwise operation on the number 
right shifting it for y times intializing its value as 8 and decrementing after each iteration
running the loop till its true
print the binary value 
*/


#include <stdio.h>

int main() {
    int x,num,y=8;
    printf("Enter the number to be converted :");
    scanf("%d",&num);
    printf("The hexadecimal value is : %X\n",num);
    printf("The binary value is :");
    loop:
    if(y--)
    {
        printf("%d",((num>>y)&01));
        goto loop;
    }
    
    return 0;
}
