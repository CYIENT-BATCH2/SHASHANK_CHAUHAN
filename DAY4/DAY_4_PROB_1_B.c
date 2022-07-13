/*    ALGORITHM
perform the bitwise operation and arithmetic operation
and get the value of z
*/


#include <stdio.h>

int main() {
    int x=10,y=20,z;
    z = x < y;
    printf("The value of z is %d\n",z);
    z = x > y;
    printf("The value of z is %d\n",z);
    z = x <= y;
    printf("The value of z is %d\n",z);
    z = (x * x - y) > (y * y - x);
    printf("The value of z is %d\n",z);
    z = (x * x * x) < (y * x * x);
    printf("The value of z is %d\n",z);
    z = ((x * y) != (y * x));
    printf("The value of z is %d\n",z);
    z = ((x * y) == (y * x));
    printf("The value of z is %d\n",z);
   
    
    return 0;
}
