#include <stdio.h>

int main() {
    int i = 10,j = 50,k;
    k = ++i + j++; 
    printf("The value of i = %d, j = %d and k = %d\n",i,j,k);
    k = i++ - ++j;
    printf("The value of i = %d, j = %d and k = %d\n",i,j,k);
    k = --i + j++ * i++ - j--;
    printf("The value of i = %d, j = %d and k = %d\n",i,j,k);
    k = (i-- + j++);
    printf("The value of i = %d, j = %d and k = %d\n",i,j,k);
   
    return 0;
}
