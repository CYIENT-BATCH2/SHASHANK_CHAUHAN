/*      ALGORITHM
Read the size of array one ,two and three from the user
storing the elements of array 1 ,2 and 3 in the array
checking the elements in array 1 and array 2 if it is common
hen it will check in the array the array 3 for the elemnt 
if its is common the it will print the element
again it will increment the array1 and check array2 and array3 elements and print all the elements
*/
------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  
#include <stdio.h>

int main()
{
  int n1;
  printf("Enter the size of array one :");                                      //reading size for array1
  scanf("%d", &n1);

  int ar1[n1];                                                            //defining the array1
  printf("Enter the elements of array one\n :");                          //reading the elements of the array1
  for(int i=0; i< n1; i++) 
     scanf("%d", &ar1[i]);

  int n2;                                                                 //reading size for array2
  printf("Enter the size of array two :");
  scanf("%d", &n2);

  int ar2[n2];                                                              //defining the array2
  printf("Enter the elements of array two\n :");                            //reading the elements of the array2
  for(int i=0; i< n2; i++) 
    scanf("%d", &ar2[i]);

  int n3;
  printf("Enter the size of array three :");                                 //reading size for array3
  scanf("%d", &n3);

  int ar3[n3];                                                               //defining the array3 
  printf("Enter the elements of array three\n :");                            //reading the elements of the array3                                
  for(int i=0; i< n3; i++) 
    scanf("%d", &ar3[i]);

  printf("Common Elements are ");                                           //printing the common elements in the array

  for(int i=0; i< n1; i++)                                                  //checking the elemts in array1
  {
      int flag = 0;                                                         //seting flag to 0
      for(int j=0 ; j< n2; j++)                                             //checking the elements in array2
      {
         if(ar1[i]==ar2[j])                                                 //checking the if both elemnts ar same
         { 
            for(int k=0; k< n3; k++)                                        //checking the elememnts in the array3
            {
              if(ar2[j]==ar3[k])                                            //if it has same elements in all the 3 array the falag is set to 1
              {
                flag=1;                                                     
                k++;
                break;
              }
           }

           j++;
           break;
          }
     }

     if(flag)                                                   //if flag is set to 1 it will print the elements
     printf("%d ", ar1[i]);
  }
return 0;
}
