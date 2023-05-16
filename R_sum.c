#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("sum of %d number is %d",n,sum(n));
    return 0;
}

int sum(int x)
{
    if (x>0)
    {
        return x+sum(x-1);
    }
    else
        return 0;
}
