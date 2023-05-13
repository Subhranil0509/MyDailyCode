#include<stdio.h>
int main()
{
    char c;
    printf("Enter a alphabets: ");
    scanf("%c",&c);

    if (c>='A'&&c<='Z')
    {
        printf("The alphabets %c is uppercase",c);
    }
    else if (c>='a'&&c<='z')
    {
        printf("The alphabets %c is lowercase",c);
    }
    
    return 0;
}
