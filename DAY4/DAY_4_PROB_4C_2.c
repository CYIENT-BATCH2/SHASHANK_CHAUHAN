/*    ALGORITHM
PErform relational AND and OR operation
*/
#include <stdio.h>

int main() {
    int i=10,j=0,k;
    k = i && (j=20); 
    printf("The value of i = %d, j = %d and k = %d\n",i,j,k);
    k = i || (j=20);
    printf("The value of i = %d, j = %d and k = %d\n",i,j,k);
   
    return 0;
}
