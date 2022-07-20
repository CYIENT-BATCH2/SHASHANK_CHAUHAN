/*Write a function to store "G_Eng_EngineTemperature_uchar" and "G_Eng_EngineRpm_uint" into " G_Msg_EngineInformation_Byte[5u]" as shown below.*/
/*        ALGORITHM
THE variable are given in the question
We need to 1000 in the array at index 0, 1, 2 
at index 3 we need to engine temperature
Using bitwise AND and biwise left shift and right shift are used
printing the array to check the elments stored
*/
------------------------------------------------------------------------------------------------------------------------------------------------------------


#include <stdio.h>

int main() 
{
    unsigned char G_Eng_EngineTemperature_uchar = 50u ;           //the variable of unsigned char is given in problem statement
    unsigned int G_Eng_EngineRpm_uint = 1000u;                    //we need to store 1000 in index 0 , 1 and 2 using the bitwise operation
    unsigned char G_Msg_EngineInformation_Byte[5u];               //the array is defined with size as 5 and elements will be stored
    for(int i=31; i>=0; i--)                                      //printing the binary value
    {
        printf("%d",(G_Eng_EngineRpm_uint >> i) & 1);
    }
    G_Msg_EngineInformation_Byte[0] = (G_Eng_EngineRpm_uint & ((16-1) << 9)) >> 9;        //extracting bit 9 to 12 using biwise AND and left shifting by 9
    G_Msg_EngineInformation_Byte[1] = (G_Eng_EngineRpm_uint & ((256-1) << 1)) >> 1;       //extracting bit 1 to 8 using biwise AND and left shifting by 1
    G_Msg_EngineInformation_Byte[2] = (G_Eng_EngineRpm_uint & 1) << 7;                    //extracting the 0 position bit and right shift and storing at array index 3
    G_Msg_EngineInformation_Byte[3] = G_Eng_EngineTemperature_uchar;
    printf("\nThe Elements values of an array after storing temp and rpm to the G_Msg_EngineInformation_Byte: ");
    for(int i = 0; i < 4; i++)                                                             //printing the array elemnts after storing the elements
    {
        printf("%d ", G_Msg_EngineInformation_Byte[i]);
    }
    
    return 0;
}
