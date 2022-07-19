/*        ALGORITHM
Take the integer variable 
the value of register is given as 0xF3
print the binary value of the hexadecimal value
Using the bitwise AND with 0x07 will get the first 3 bits 
then using bitwise And and right shift we can extract the value 
prints the extracted value of the particular bits
*/

--------------------------------------------------------------------------------------------------------------------------------------------------------

  
#include <stdio.h>

int main() 
{
    int  TOCON = 0xF3,x,T0PS0,T0PS1,T0PS2;                //declaring the integer variable
    
    printf("The binary value after of TOCON is :\n");     //printing the binary value of 0xF3 using right shift And with 1 will print bit by bit value
    for(int i=7; i>=0; i--)
    {
        printf("%d ",((TOCON>>i)&01));
    }
    printf("\n");                                           //printing the new line
    x = (TOCON & 0x07);                                     //Unsing Biwise AND to get first 3 bits from LSB
    printf("The value of T0PS2, T0PS1, T0PS0 bits in TOCON register is : 0x0%X\n",x);             //printing the heaxdecimal value after extracting the bits
    printf("The binary value of T0PS2, T0PS1, T0PS0 bits in TOCON register is : \n");             //printing the binary value after extracting the bits
    for(int i=7; i>=0; i--)
    {
        printf("%d ",((x>>i)&01));
    }
    printf("\n");
    T0PS0 =(x & 0x01);                                            //extracting the T0PS0 bit using bitwise and operation 
    T0PS1 =(x & 0x02) >> 1;                                       //extracting the T0PS0 bit using bitwise and operation and doing right shift to get the LSB
    T0PS2 =(x & 0x04) >> 2;                                     //extracting the T0PS0 bit using bitwise and operation and doing right shift to get the LSB
    printf("The value of the bits are: \nT0PS0 = %d\nT0PS1 = %d\nT0PS2 = %d\n",T0PS0,T0PS1,T0PS2);
                //printing the value of T0PS0,T0PS1 and T0PS2 bits 
    return 0;
}
