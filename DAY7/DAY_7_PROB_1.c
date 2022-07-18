/*        ALGORITHM
declare a function of integer type
A hexadecimal value is taken for the conversion from little to Big endian system
storing the return value and calling the function
We need to extract 8 bytes of data everytime and shift LSB to MS and vice versa
printing the value to get the Big endian data
*/
------------------------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
int big(unsigned int);              //declaring the function prototype

int main() 
{
    int x=0x12345678,num=0;               //hexadecimal value is taken andvariable is declared
    num = big(x);                           //calling the function with giving input
    printf("The Big endian output is : 0x%x",num);    //printing the output in Big Endian data
	  return 0;
}
int big(unsigned int x)                   //defining the function
{
    int res = 0;                            //declaring the varaible
    res = (res | ((0x000000ff) & x)<< 24);    //taking the original value and extracting 8 bytes of data and shifting it by 24 bytes to left side
    res = (res | ((0x0000ff00) & x)<< 8);     //taking the original value and extracting 8 bytes of data and shifting it by 8 bytes to left side
    res = (res | ((0x00ff0000) & x)>> 8);     //taking the original value and extracting 8 bytes of data and shifting it by 8 bytes to right side
    res = (res | ((0xff000000) & x)>> 24);    //taking the original value and extracting 8 bytes of data and shifting it by 24 bytes to right side
    return res;
}
