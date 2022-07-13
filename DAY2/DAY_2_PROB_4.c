#include <stdio.h>

int main() 
{
    int size,y,count=0,i;
    scanf("%d",&size);
    int arr[size];
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<size;i++)
    {
        while(arr[i])
        {
        y = arr[i] % 10;
        if(y==3)
        {
            count= count +1;
            break;
        }
        else
        arr[i]= arr[i]/10;
        }
    }
    printf("%d ",count);
    
    return 0;
}
