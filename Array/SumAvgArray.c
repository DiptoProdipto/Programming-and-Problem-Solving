//Calculate the summary and average of an array

#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    float avg;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    avg = sum/n;
    printf("Sum= %d\n",sum);
    printf("Average: %.2f\n",avg);
}
