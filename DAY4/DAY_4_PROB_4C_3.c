/*    ALGORITHM
USING THE relational operator OR and AND
*/
#include <stdio.h>

int main() {
    int i=0,j=0,k=30,l;
    l = i || (j=20) && k; 
    printf("The value of i = %d, j = %d ,k = %d and l = %d\n",i,j,k,l);
   
    return 0;
}
