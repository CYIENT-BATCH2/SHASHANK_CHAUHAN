/*    ALGORITHM
we can take some varaiables and using it we can get first digit
by dividing the number by 10000 and store the value in a variable
then divide the number by 10 one digit we be lost and then do modulo of 10
we will get the second last number from the digit
we can add first and second last number and print its value
*/
#include <stdio.h>

int main() 
{
    int i,j,k,s,sum;
    printf("Please enter 5 digit number :");
    scanf("%d",&i);
    j= i / 10000;
    k = i /10;
    s = k % 10;
    sum = s + j;
    printf("The sum of 1st and 2nd last digit is : %d",sum);
  
    return 0;
}
