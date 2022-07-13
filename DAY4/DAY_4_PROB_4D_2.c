/*    ALGORITHM
Perform the realational and bitwise operation on the variable 
and storing the variable output in k
*/
#include <stdio.h>

int main() {
    int i = 10,j = 20,k = 30;
    k = i && j & k; 
    printf("The value of k is %d\n",k);
    k = i & j | k && i;
    printf("The value of k is %d\n",k);
    k = i || j & j;
    printf("The value of k is %d\n",k);
    k = i || j & (j && k);
    printf("The value of k is %d\n",k);
   
    return 0;
}
