// Special number 11
#include <stdio.h>

int main() {
    int n;
    printf("Please enter the number :");
    scanf("%d",&n);
    if((n % 11)==0 ||(n % 11)== 1)
    {
        printf("The number %d is special number\n",n);
    }
    else
    {
        printf("The number %d is not special number\n",n);
    }
    
    return 0;
}
