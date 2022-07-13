#include <stdio.h>

int main() {
   int i,count=0;
   for(i=1990; i<=2022;i++)
   {
       if ((i % 4== 0) && ((i % 400 ==0)||(i%100 !=0)))
       count++;
   }
   printf("The number of leap year from 1990 to 2022 is %d.",count);
    
    return 0;
}
