#include <stdio.h>

int main() 
{
    int i = 10,j = 2,k;
    k = i << j;
    printf("The value of k = %d\n",k);
    k = i >> j;
    printf("The value of k = %d\n",k);
    k = (i && j) << j;
    printf("The value of k = %d\n",k);
    k = (i || j) >> j;
    printf("The value of k = %d\n",k);
    k = (i & j) << i;
    printf("The value of k = %d\n",k);
    k = (i || j && i);
    printf("The value of k = %d\n",k);
    return 0;
}
