//Even or Odd

#include<stdio.h>
int main()
{
    while(1)
    {
        int n;
        printf("Enter number: ");
        scanf("%d",&n);
        if(n%2==0)
            printf("%d is an even number.\n",n);
        else
            printf("%d is a odd number.\n",n);
    }
}
