/*          ALGORITHM
Read the input from the user in register as hexadecimal value
Print the binary value of the hexa value
Using Bitwise AND OPERATION to clear the bit in the register
Again binary and hexadecimal value are printed for user understanding
*/

------------------------------------------------------------------------------------------------------------------------------------------------
  
  
#include <stdio.h>

int main() 
{
    int  SSPSTAT ,x;                                                  //declaring the integer variable
    printf("Enter the value to SSPSTAT register: ");                  //reading the hexadecimal value from the user 
    scanf("%x",&SSPSTAT);                                             //storing the value in the variable
    printf("The binary value after of SSPSTAT is :\n");               //printing the binary value of the hexa value 
    for(int i=7; i>=0; i--)
    {
        printf("%d ",((SSPSTAT>>i)&01));
    }
    printf("\n");                                                       //print new line
    x = (SSPSTAT & 0xA7);                                               //using bitwise AND OPERATION wth 0xA7 will clear the CKE, P and S bit 
    printf("The value of bit CKE, P and S bit are cleared (0), in SSPSAT register : 0x%X\n",x);     //printing the hexavalue after clearing the bit in the register
    printf("The binary value of bit CKE, P and S bit are cleared (0), in SSPSAT register : \n");    //printing the binary value after clearing the bit in the register
    for(int i=7; i>=0; i--)                                                                         //user can check the whether the given is cleared or not
    {
        printf("%d ",((x>>i)&01));
    }
    printf("\n");
    return 0;
}
