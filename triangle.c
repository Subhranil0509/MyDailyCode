#include <stdio.h>

int main()
{
    float a1, a2, a3, sum;

    printf("Enter three angles of triangle: \n");
    scanf("%f %f %f", &a1, &a2, &a3);

    sum = a1 + a2 + a3; 

    if(sum == 180 && a1 > 0 && a2 > 0 && a3 > 0) 
    {
        printf("This triangle can be formed.");
    }
    else
    {
        printf("This triangle can't be formed.");
    }

    return 0;
}
