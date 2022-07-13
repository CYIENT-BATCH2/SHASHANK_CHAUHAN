/* Perform the bitwise operartion on the operator
and printing the value of k
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
