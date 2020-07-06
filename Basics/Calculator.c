//Calculator

#include<stdio.h>
int main()
{
    char o;
    int n1,n2;
    printf("Enter operator: ");
    scanf("%c",&o);
    printf("Enter number1: ");
    scanf("%d",&n1);
    printf("Enter number2: ");
    scanf("%d",&n2);

    switch(o)
    {
    case '+':
        printf("Result: %d\n",n1+n2);
        break;

    case '-':
        printf("Result: %d\n",n1-n2);
        break;

    case '*':
        printf("Result: %d\n",n1*n2);
        break;

    case '/':
        printf("Result: %0.2f\n",(float)n1/n2);
        break;
    }
}
