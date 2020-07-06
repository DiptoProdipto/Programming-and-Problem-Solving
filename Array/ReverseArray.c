//Print the reverse format of an array

#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
