#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) 
     printf("It is Alphabet");
     else
     printf("It is not Alphabet");

    return 0;
}
