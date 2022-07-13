/*      ALGORITHM
Read 3 digit input from user store it in value
using the if and goto loop is executed
checking if number is grater than 0
modulo of number by 10 will give last digit 
then again we will get agin one more remainder which we added to multiplication of previous remainder and 10
this is repeated till it become zero
print the value we will get the reverse value
*/
#include <stdio.h>

int main() 
{
    int i,j=0,k,s,sum;
    printf("Please enter 3 digit number :");
    scanf("%d",&i);
    loop:
    if(i>0)
    {
        j = j *10 +i % 10;
        i = i / 10;
        if(i>0)
        {
            goto loop;
        }
       
    }
   
    printf("The reverse of three digit number is : %d",j);
  
    return 0;
}
