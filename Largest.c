#include <stdio.h>
int main()
{
    float n1, n2, n3;
    
    printf("Enter the three number: ");
    scanf("%f %f %f", &n1, &n2, &n3 );
    
    if (n1 > n2){
        if (n1 > n3){
            printf("%.2f is the largest number.", n1);
        }
        else{
            printf("%.2f is the largest number.", n3);
        }
    }
    else{
        if (n2 > n1){
            printf("%.2f is the largest number.", n2);
        }
        else{
            printf("%.2f is the largest number.", n3);
        }
    }
    return 0;
}
