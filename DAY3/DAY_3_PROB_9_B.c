/*        ALGORITHM
Read the value from user in zero and ones
using while loop will run the loop till it becomes zero
doing modulo of 10 will give last digit and
multipliy it with 1 and add with the remainder
every time the loop the value of i is incresed in multiple of 2 and its multiplied with the digit
doing the addition will give the decimal value
using format specifier %X we can get hexadecimal number
*/


#include <stdio.h>
 
int main()
{
    int x,y,i=1,rem = 0;
    printf("Please enter the number in binary form :");
    scanf("%d",&x);
    while(x != 0)
    {
        y = x % 10;
        rem = rem + y * i;
        i = i * 2;
        x = x / 10;
    }
    printf("The Hexa value is '%X'",rem);
    return 0;
}
