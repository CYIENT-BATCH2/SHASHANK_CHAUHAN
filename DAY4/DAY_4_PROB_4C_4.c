/*      ALGORITHM
Perform arithmetic operator and realtional operator
to get the value of l
*/
#include <stdio.h>

int main() {
    int i=10,j=20,k = 0,l;
    l = i && j || j && k; 
    printf("The value of i = %d, j = %d ,k = %d and l = %d\n",i,j,k,l);
    l = i || j && i || k;
    printf("The value of i = %d, j = %d ,k = %d and l = %d\n",i,j,k,l);
    return 0;
}
