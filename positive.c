#include<stdio.h>
int main()
{
    int n;
    printf("Enter the integar: ");
    scanf("%d",&n);

    if (n < 0)
    {
        printf("The number %d is negative",n);
    }
    else if (n > 0)
    {
        printf("The number %d is positive",n);
    }
    else if (n==0)
    {
        printf("The number %d is zero",n);
    }
    
    
    return 0;
}
