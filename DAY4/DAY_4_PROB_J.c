/*    ALGORITHM
This program the use of comma operator as operator and sepeartor
first it act as seperator
second it act as operator
*/


#include <stdio.h>

int main() 
{
    int x ;
    x= 10,20,30;
    
    printf("The value of x is %d when comma acts as seperator\n",x);
    x=(10,20,30);
    printf("The value of x is %d when comma acts as operator \n",x);
   
    return 0;
}
