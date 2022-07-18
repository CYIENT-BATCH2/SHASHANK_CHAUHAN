/*      ALGORITHM
Take datatype as long long integer 
Read hexadecimal number form user
print its binary value using for loop in 64 bits
using AND operation to get the even position of the bit and right shift it with 1
using AND operation to get the odd position of the bit and left shift it with 1
and using OR operation to get the final value
print its value to check the position of odd and even bit are swapped
*/
------------------------------------------------------------------------------------------------------------------------------

  #include <stdio.h>

int main() {
    unsigned long long int x,b,y,z,a;                                     //defing the datatype as long long int
     
    printf("Enter the number whose bit need to be swapped: ");             //reading the input from the user
    scanf("%llx",&x);                                                     //storing in the variable
    printf("The binary representation of number is :\n");                  //printing its binary value before swapping using for loop
   
    for(int i=63; i>=0; i--)
    {
        z = ((x>>i) & 1);
        printf("%lld",z);
    }
    printf("\n");
    b = ((x & 0xAAAAAAAAAAAAAAAA) >> 1);                    //using AND operation 0xaaaaaaaaaaaaaaaa to get the even position bits and right shift to 1
    y = ((x & 0x5555555555555555) << 1);                    //using AND operation 0x5555555555555555 to get the odd position bits and left shift to 1
    a = (b | y);                                            //using OR operation to get the final swapped value
    printf("The value after swapping even with odd bit position %lld\n", a);    //printing the hexadecimal value after swapping even bit with odd bit
    printf("The binary representation of number after swapping is :\n");        //printing the binary value after swapping the bits 
    for(int i=63; i>=0; i--)
    {
        printf("%lld",((a>>i) & 1));
    }

    return 0;
}
