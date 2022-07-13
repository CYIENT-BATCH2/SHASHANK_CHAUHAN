#include <stdio.h>

int main() {
   int x,y,z,res;
   printf("Enter the weight of frist person :");
   scanf(" %d",&x);
   printf("Enter the weight of second person :");
   scanf(" %d",&y);
   printf("Enter the weight of third person :");
   scanf(" %d",&z);
   res = x> y ? x > z? x :z : (y > z) ? y :z;
   printf("The highest weight is %d",res);

    return 0;
}
