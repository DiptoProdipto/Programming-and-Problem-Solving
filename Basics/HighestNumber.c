//Highest number print

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is highest.\n",a);
    else if(b>a && b>c)
        printf("%d is highest.\n",b);
    else
        printf("%d is highest.\n",c);
}
