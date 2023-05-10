#include<stdio.h>
int main()
{
    char opt;// (+,-,*,/)
    float n1,n2,ans;
    printf("Enter an oparetor (+,-,*,/): ");
    scanf("%c",&opt);
    printf("Enter two number:\n");
    scanf("%f %f",&n1,&n2);
    
    switch (opt)
    {
    case '+':
        ans = n1+n2;
        printf("%.2f + %.2f = %.2f",n1,n2,ans);
        break;
    case '-':
        ans = n1-n2;
        printf("%.2f - %.2f = %.2f",n1,n2,ans);
        break;
    case '/':
        ans = n1/n2;
        printf("%.2f / %.2f = %.2f",n1,n2,ans);
        break;
    case '*':
        ans = n1*n2;
        printf("%.2f * %.2f = %.2f",n1,n2,ans);
        break;

    default:
        printf("Error 404 *-* \nYour Input is invalid");
        break;
    }

    return 0;
}
