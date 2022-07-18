/*      ALGORITHM
Declare integer variable
read hexadecimal input from the user
print the binary representation og register ADCON and CMCON
Check the condition if Adcon register value is 0x07 then clear the CMCON register 
else print the message that bit is not claered
*/
--------------------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    
    int AD,CM,x;                                                          //declare the integer varaible
    printf("Enter the hexadecimal number for ADCON and CMCON register: "); //read the hexadecimal input from user
    scanf("%x %x",&AD,&CM);                                                 //store the value in the varaible
    printf("The binary value of the register ADCON is: ");                  //print the binary value of ADCON register
    for(int i=7; i>=0; i--)
    {
        printf("%d ",((AD>>i)&01));
    }
    printf("\n");
    printf("The binary value of the register CMCON is: ");                   //print the binary value of CMCON register
    for(int i=7; i>=0; i--)
    {
        printf("%d ",((CM>>i)&01));
    }
    printf("\n");
    if((AD & 0x3C) == 0x1C)                                                   //checking if the input value is equal 0x07 
    {
        CM = (CM & 0xF0);                                                     //if the condition is true then we have to clear the CMCON first four bit 
        printf("The value of the register CIS, CM2, CM1, CM0 is clear to 0 :\n");
        for(int i=7; i>=0; i--)                                             //after clearing the bit printing thr binary value
        {
            printf("%d ",((CM>>i)&01));
        }
    }
    else                                                                            //if value of ADCON register is not equal to 0x07 then else part will be executed
    {
        printf("The value of the register CHS3, CHS2, CHS1, CHS0 is not equal to 0x07");
    }
    return 0;
}
