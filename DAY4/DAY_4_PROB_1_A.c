/*      ALGORITHM
its using the arithmetic operation and will print the value of k
the last output will not run as it is reassigning the value of x = y;
so its an error
*/
#include <stdio.h>

int main() {
    int x=30,y=20,z=10,k;
    k = x + y * z / 4 % 2 - 1 ;
    printf("The value of k is %d\n",k);
    k= x% y+z*z;
    printf("The value of k is %d\n",k);
    k=  x*x-y/z;
    printf("The value of k is %d\n",k);
    k= x+y/z-y;
    printf("The value of k is %d\n",k);
    y=x+y-(x=y); 
    printf("The value of k is %d\n",y);
    /*y=x+y-x=y;
    printf("The value of k is %d",y);*/
    
    return 0;
}
