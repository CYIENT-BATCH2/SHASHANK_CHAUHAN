/*      ALGORITHM
READ the binary value form user
run the while till its become equal to 0
using the value and multiply with 2^x will do the addition will get the dcimal value
and using format specifier %X will get hexadecimal value 
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
    printf("The decimal value is '%d'\n",rem);
    printf("The Hexa value is '%X'",rem);
    return 0;
}
