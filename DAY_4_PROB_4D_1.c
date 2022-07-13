/*    ALGORITHM
Perform the bitwise operation on the variable 
and printing the value
*/
#include <stdio.h>

int main() {
    int i=10,j = 20,m = 5,k;
    k = i & j; 
    printf("The value of k is %d\n",k);
    k= i | j;
    printf("The value of k is %d\n",k);
    k = i ^ j;
    printf("The value of k is %d\n",k);
    k = i && j | m && j;
    printf("The value of k is %d\n",k);
    k = i || j & m && i;
    printf("The value of k is %d\n",k);
    k = i & j | j || m;
    printf("The value of k is %d\n",k);
   
    return 0;
}
