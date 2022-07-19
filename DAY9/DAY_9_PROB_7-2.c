/*          ALGORITHM
declare the variable and store the varaible
print the binary value for understanding
Using bitwise AND operation we can get the bits
Print the bit value of all the register
*/

--------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <stdio.h>

int main() 
{
    int  SSPSTAT = 0x55,x,UA, BF, SMP;        //decalre the variable and value is given from the problem
    
    printf("The binary value after of SSPSTAT is :\n");       //printing the binary value of hexa value 0x55
    for(int i=7; i>=0; i--)
    {
        printf("%d ",((SSPSTAT>>i)&01));
    }
    printf("\n");                                             //printing new line
    x = (SSPSTAT & 0x83);                                     //using bitwise AND operation with 0x83 will get the  UA, BF, SMP bits
    printf("The value of UA, BF, SMP bits in SSPSTAT register is : 0x0%X\n",x);  // printing the hexa value after extracting the bits
    printf("The binary value of  UA, BF, SMP bits in SSPSTAT register is : \n");    // printing the binary value after extracting the bits
    for(int i=7; i>=0; i--)
    {
        printf("%d ",((x>>i)&01));
    }
    printf("\n");                         //print new line
    BF = (x & 0x01);                      //extracting the bit value using bitwise AND
    UA = (x & 0x02) >> 1;                 //extracting the bit value using bitwise AND and right shift operation
    SMP = (x & 0x80) >> 7;                //extracting the bit value using bitwise AND and right shift operation
    printf("The value of the bit in SSPSTAT register is \nBF = %d\nUA = %d\nSMP= %d\n",BF,UA,SMP);
    //printing the value of  UA, BF, SMP bits
    return 0;
}
