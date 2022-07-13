/*      ALGORITHM
read the year and month of birth from user and store it in two variable
then using arithmetic subtraction we can subtract the year with the present year will give the year
same way we can get the months but if the months are negative i have used to add with 12 so that it will give exact value of months 
print the months and year of the age
*/



#include <stdio.h>

int main() {
    int x,y,a,b,X,Y;
    printf("Enter the year and month of birth :");
    scanf("%d/%d",&x,&y);
    printf("Enter the present year and month :");
    scanf("%d/%d",&a,&b);
    X= (a- x )-1;
    Y= b - y;
    if(Y<0)
    {
        Y=12+Y;
    }
    
    printf("The age of person is %d years and %d months",X,Y);
    
    return 0;
}
