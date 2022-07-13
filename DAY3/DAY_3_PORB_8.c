/*    ALGORITHM
Read the character from user
using the ASCII value range 65 to 90 and 97 to 122
if the character lies between any two of the range it will print Alphabate
else print not alphabates
*/


#include <stdio.h>

int main() {
    char x;
    printf("Please enter the character :");
    scanf("%c",&x);
    if((x>=65 && x<=90) || (x>=97 && x<=122))
    {
        printf("The entered character '%c' is alphabate",x);
    }
    else
    {
        printf("The entered character '%c' is not an alphabate",x);
    }
    
    return 0;
}
