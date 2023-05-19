//Write a C program to find the sum of first 10 naturl number.

#include<stdio.h>
int main()
{
    int i=1,sum=0;

    printf("The first 10 naturl number is ");

    for (; i <=10; i++)
    {
        printf(" %d",i);
        sum = sum+i;
    }
    
    printf("\nThe sum of first 10 naturl number is %d",sum);

    return 0;
}