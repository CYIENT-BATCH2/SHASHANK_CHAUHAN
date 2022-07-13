/*    ALGORITHM
Take variable for differnt datatypes
use sizeof operator to get the size of the variable and datatype
print the sizeof of variable and datatype
*/
#include <stdio.h>

int main() 
{
    int x;
    float y;
    char ch;
    double z;
    printf("The sizeof integer is %d and varaible is %d \n",sizeof(int),sizeof(x));
    printf("The sizeof float is %d and variable is %d\n",sizeof(float),sizeof(y));
    printf("The sizeof char is %d and varaible is %d\n",sizeof(char),sizeof(ch));
    printf("The sizeof double is %d and variable is %d\n",sizeof(double),sizeof(z));

    return 0;
}
