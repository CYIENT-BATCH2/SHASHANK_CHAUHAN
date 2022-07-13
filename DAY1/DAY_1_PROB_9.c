#include <stdio.h>

int main() {
   int x,y,AND,OR,NOT;
   printf("Enter the value of x either '0' or '1':");
   scanf(" %d",&x);
   printf("Enter the value of y either '0' or '1':");
   scanf(" %d",&y);
   
   AND = x && y;
   printf("The output of AND gate is %d\n", AND);
   OR = x || y;
   printf("The output of OR gate is %d\n", OR);
   NOT = (!x);
   printf("The output of NOT gate is %d\n", NOT);
   
    return 0;
}
