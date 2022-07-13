/*      ALGORITHM
Two variable with value is printed before swaping
taing the temp variable to hold x value
x holds value of y
y will again hold the value of temp which is indirectly value of x
so the swapping is done
print the variable after swapping
*/

#include <stdio.h>

int main() 
{
    int x = 10,y = 20 ,temp  ;
    printf("Before swapping the value of x = %d and y = %d\n",x,y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping the value of x = %d and y = %d\n",x,y);
    
    return 0;
}
