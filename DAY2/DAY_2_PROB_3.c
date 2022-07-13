#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students in class: ");
    scanf("%d",&n);
    int x= n * (n-1) / 2;
    printf("The total number of handshakes are %d\n",x);

    return 0;
}
