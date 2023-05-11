#include<stdio.h>
int main()
{
    float r,pi=3.141,ar,per;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    per = 2*pi*r;
    ar= pi*r*r;
    printf("the perimeter and area of a circle is %.2f and %.2f",per,ar);
    
    return 0;
}
