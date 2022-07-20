/*            ALGORITHM
The value of the variable is given in problem statement
Array with size 3 is defined
printing the binary value of -60 
Declaring the function prototype and performing the bitwise operation to 
store value in the array and printing the output
*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  
#include <stdio.h>                                      
void EngineInformation(signed int char, unsigned char );                                  //declaring function prototype

int main() 
{
    signed int G_Str_SteeringAngle_sint = -60;                                            //value of  signed integer is stored in variable
    unsigned char G_Msg_SteeringInformation_Byte[3u];                                     //unsigned char array with size 3 is defined
    
    for(int i=31; i>=0; i--)                                                            //printing thebinary value of -60
    {
        printf("%d",(G_Str_SteeringAngle_sint >> i) & 1);
    }
    EngineInformation(G_Str_SteeringAngle_sint,G_Msg_SteeringInformation_Byte);          //calling the function with parameters 
    printf("\nThe Elements values of an array after storing steeringle angle to the G_Msg_EngineInformation_Byte: ");
    for(int i = 0; i < 3; i++)                                                             //printing the value of array stored at indices
    {
        printf("%d ", G_Msg_SteeringInformation_Byte[i]);
    }
    
    return 0;
}
void EngineInformation(signed int Angle_sint, unsigned char Information_Byte[3])        //defining function
{
    Information_Byte[0] = (Angle_sint & ((4-1) << 10)) >> 10;               //using bitwise AND operation with 3 with left shift by 10 bits and again right shift by 10
    Information_Byte[1] = (Angle_sint & ((256-1) << 2)) >> 2;              //using bitwise AND operation with 255 with left shift by 2 bits and again right shift by 2
    Information_Byte[2] = (Angle_sint & 3) << 6;                           //using bitwise AND operation with 3 with left shift by 6
    
}
