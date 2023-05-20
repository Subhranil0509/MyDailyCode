#include <stdio.h>
int main()
{
    float n1, n2;
 
    printf("Enter the two numbers: \n");
    scanf("%f %f", &n1, &n2);
    if (n1 == n2)
        printf("This two numbers are equal");
    else
        printf("This two numbers are not equal");

    return 0;    
}
