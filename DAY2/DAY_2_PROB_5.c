#include <stdio.h>

int main() {
    int n,x=0;
    printf("Please enter the number to be decoded :");
    scanf("%d",&n);
    x = n + 64;
    printf("The encoded character is :'%c'",x);
    
    return 0;
}
