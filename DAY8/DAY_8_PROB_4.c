/*          ALGORITHM
Declare the integer variable 
declare a function that takes value and position to be flip from the user
calling the function after the giving the both the arguments
printing the binary value before toggiling and after toggling the bit
performing the toggling operation 
*/
---------------------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
int flip(int bit,int position);               //declaring the integer function
int main() 
{
    int i,z,x,bit,position;                   //declaring the integer variable
    printf("Enter the number: ");             //reading the input from user and storing in the variable
    scanf("%d",&bit);
    
    printf("Enter the value of position to be flip : ");    //reading the bit position to be flipped from user
    scanf("%d",&position);
    z = flip(bit,position);                                 //calling the function from the user
    printf("The value after fliping the bit is %d\n",z);    //the decimale value after fliiping the bit
    printf("The binary value before fliping the bit :");     //the binary value before flipping the bit
    for(i=7; i>=0; i--)
    {
        printf("%d",((bit >> i) & 1));
    }
    printf("\n");
    printf("The binary value after fliping the bit : ");     //the binary value after flipping the bit
    for(i=7; i>=0; i--)
    {
        printf("%d",((z >> i) & 1));
    }
    
}
int flip(int bit,int position)      //writng the function condtion
{
    int x;
    x = bit ^ (1 << (position - 1)) ;  //togling the bit position entered by the user using the exor operation
    
    return x;
}
