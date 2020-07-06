//Prime or not Prime

#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter number: ");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        if(n%2==0){
            count++;
        }
    }
    if(n==1 && count==0)
        printf("%d is not a prime number.\n",n);
    else if(count==0 && n!=1)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number.\n",n);
}
