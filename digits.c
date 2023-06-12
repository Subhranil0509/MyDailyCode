#include<stdio.h>
int main()
{
    int n,f,l;
    printf("Enter the number: ");
    scanf("%d",&n);
    l= n%10;
    while (n>=10)
    {
        n=n/10;
        f=n;
    }
    printf("The 1st digit is: %d\nThe last digit is: %d",f,l);
    return 0;
}
