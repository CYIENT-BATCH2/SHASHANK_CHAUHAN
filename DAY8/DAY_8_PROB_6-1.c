/*        ALGORITHM
Read the hexadecimal value from the user
print the binary value so the user can check whether the bit are set to 1 or not
after printing we need to use bitwise OR to set the bit given by the user
printing the hexadecimal value after setting the bit 
printing the binay value after setting the bit for the user understanding
*/

-------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <stdio.h>

int main() 
{
    int  TOCON,x;                                                                   //declaring integer variable
    printf("Enter the value to T0CON register: ");                                  //reading the hexadecimal value from user 
    scanf("%x",&TOCON);
    printf("The binary value before the bit TMR0ON and PSA bit to 1 is :\n");       //printing the binary value before setting the bit TMR0ON AND PSA bit
    for(int i=7; i>=0; i--)
    {
        printf("%d ",((TOCON>>i)&01));
    }
    printf("\n");                                                               //print new line
    x = (TOCON | 0x88);                                                             //using bitwise OR operation with 0x88 will set the both the bits to 1
    printf("The value after setting the bit TMR0ON and PSA bit to 1 is : 0x%X\n",x);    //printing the hexadecimal value after setting the both bits to 1
    printf("The binary value after setting the bit TMR0ON and PSA bit to 1 is :\n");    //printing the binary value after setting the both bits to 1
    for(int i=7; i>=0; i--)
    {
        printf("%d ",((x>>i)&01));
    }
   
    return 0;
}
