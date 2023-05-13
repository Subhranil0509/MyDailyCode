#include<stdio.h>
int main()
{
    char ch;
    printf("Enetr the alphabet: ");
    scanf("%c",&ch);

    if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("The alphabet is vowel");
    }
    else
        printf("The alphabet is consonant");
    return 0;
}
