#include <stdio.h>

int main() 
{
    char ch;
    printf("Please enter the character :");
    fflush(stdout);
    scanf("%c",&ch);
    if(ch =='a' || ch =='e' || ch =='i'|| ch=='u' || ch== 'A'|| ch=='E' || ch== 'O' || ch == 'U')
    {
        printf("The character '%c' is vowel\n",ch);
    }
    else
    {
        printf("The character '%c' is consonanat\n",ch);
    }
    
    return 0;
}