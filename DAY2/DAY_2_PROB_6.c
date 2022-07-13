#include <stdio.h>

int main() 
{
    float c,C,f,F;
    printf("please enter the temperature in C ");
    scanf("%f",&c);
    F= c * 1.8 + 32;
    printf("Temperature in Farenhiet is %0.3f\n",F);
    printf("please enter the temperature in F ");
    scanf("%f",&f);
    C = (f - 32) * 5/9;
    printf("Temperature in Celcius is %0.3f\n",C);
   
    return 0;
}
