/*
perform the AND ,OR and NOT operation on the i and j
*/
#include <stdio.h>

int main() {
    int i=10,j=20,k;
    k = i && j; 
    printf("The value of k is %d\n",k);
    k = i || j;
    printf("The value of k is %d\n",k);
    k = !i;
    printf("The value of k is %d\n",k);
   
    return 0;
}
