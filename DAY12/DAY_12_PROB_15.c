/*        ALGORITHM
stirng array is intialized there is also one empty string
checking the empty string if emepty string is found
then we have to replaced it with cyient
after replacing the empty string 
we will print the array again
*/

----------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  
#include<stdio.h>   //stdio.h header file 
#include<string.h>  //string.h header file
int main()          //main function starts from here 
{
    int i = 0;      //variable declaration 
    char string[6][15] = {"Bosch","Infiquity","NXP","QUALCOMM","","BROADCOM"}; //given the input array string 
    while(i < 6) //using the while loop checking the each array string which has the empty 
    {
        if(! strcmp(string[i], ""))  //using the strcmp and strcpy function of string.h header file performing the given operation 
        {
            strcpy(string[i],"CYIENT");
            printf("The empty string is present is the array at %d position\n", i);
        }
        i++;
    }
    printf("After the replaced the empty string  with cyient : \n");
   for(int i = 0; i < 6; i++)
   {
       printf("%s ", string[i]);
   }
}
