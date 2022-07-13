#include <stdio.h>
#define PI 3.14

int main() 
{
    float r,A;
    printf("Please enter the raidus :");
    scanf("%f",&r);
    A =  PI * r *r;
    printf("The area to be covered in garden is %.3f \n",A);
    
    return 0;
}
