#include<stdio.h>
int main()
{
    int n,i,j=0,b;
    printf("Enter the arrey size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the arrey numbers:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to chack the frequency: ");
    scanf("%d",&b);
    for (i = 0; i < n; i++)
    {
        if (b==a[i])
        {
            j++;
        }
        
    }
    
    printf("The frequency of the %d is: %d",b,j);

    return 0;
}
