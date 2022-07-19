/*          ALGORITHM
Declare a function which take size and pointer as argument
declare integer variable
Read the size of array and define array
read the array from the user
call the function of sorting
check the condition if the number is greater then next number do the swapping
run the loop till all elemets are sorted
print the sorted array
*/

-----------------------------------------------------------------------------------------------------------------------------------------
  
#include <stdio.h>
int sort(int size,int* ptr);                                                  //declaring the function
int main() {
    int size,i;                                                               //declaring integer varaible
    printf("Enter the size of array: ");                                      //printing and reading the variable from user
    scanf("%d",&size);
    int arr[size];                                                            //declaring the array
    printf("Enter %d number of elements in the array:",size);                 //using for loop to reading the array elements from the user
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++)                                                     //using for loop to print all the elements from the user
    {
        printf("Element- %d: %d\n",i+1,arr[i]);
    }
    sort(size,arr);
}
int sort(int size, int* ptr)                                            //writing the function condition
{
    int i,j,temp;                                                       //declaring the intger varaible
    for(i=0; i<size; i++)                                               //using the two for loop we are comapring current elements and the next element
    {                                                                   //if the value is greater of current elemnts then we do the swapping 
        for(j=i+1; j<size; j++)                                         //the number is comapred with each and every elemnts and the samllest number is written first
        {
            if (*(ptr+i) > *(ptr+j))                                   //with the help of pointer the sorting is done in ascending order
            {
                temp = *(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)= temp;
            }
        }
    }
    printf("\nThe elments in the array after sorting \n: ");      //printing the sorted array i.e. in ascending order
  for(i = 0; i < size; i++)
	{
		printf("Element- %d: %d\n",i+1, *(ptr + i));
	}
}
    
   
