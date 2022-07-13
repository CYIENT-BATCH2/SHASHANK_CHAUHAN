/*    ALGORITHM
Read the eight integer input and seven float input from user
find the sum using addition opeartion for integer input
find the average of integer value by dividing sum by 8
Mean can be find by taking sum of largest number and smallest number and dividing by 2
find the average of float value by dividing sum by 7
BY dividing the sum of integer with sum of float will get the value
At last we need to typecasting to print value in integer form of float value
*/
#include <stdio.h>

int main() {
    int i1,i2,i3,i4,i5,i6,i7,i8,sum;
    float f1,f2,f3,f4,f5,f6,f7,sumf,avg,mean,avgf,meanf,div,divf;
    printf("Please enter Eight integer number:");
    scanf(" %d%d%d%d%d%d%d%d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8);
    printf("Please enter seven float numbers:");
    scanf(" %f%f%f%f%f%f%f",&f1,&f2,&f3,&f4,&f5,&f6,&f7);
    sum = i1+i2+i3+i4+i5+i6+i7+i8;
    avg = sum / 8;
    mean = sum /8;
    sumf = f1+f2+f3+f4+f5+f6+f7;
    avgf = sumf / 7;
    meanf = sumf /7;
    div = sum / sumf;
    divf = avg / avgf;
    printf("The sum, average and mean of integers are '%d' '%0.2f' '%0.2f' respectively.\n",sum,avg,mean);
    printf("The sum, average and mean of float values are '%0.2f' '%0.2f' '%0.2f' respectively.\n",sumf,avgf,meanf);
    printf("The division of sum of integer with sum of float gives '%.2f'\n",div);
    printf("The division of average of integer with average of float gives '%.2f' \n",divf);
    printf("The float values in integers are '%d' '%d' '%d' '%d' '%d' '%d' '%d'\n",(int)f1,(int)f2,(int)f3,(int)f4,(int)f5,(int)f6,(int)f7);
    
    return 0;
}
