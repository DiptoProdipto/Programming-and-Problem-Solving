//Reverse a string

#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i=0,j=0,count=0,len=0;

    printf("Enter s1: ");
    gets(s1);

    for(i=0;s1[i]!='\0';i++){
        len++;
    }

    for(j=0,i=len-1;i>=0;i--)
    {
        s2[j]=s1[i];
        j++;
    }
    s2[j]='\0';

    printf("%s\n",s2);

    for(i=0,j=0;s1[i]!='\0',s2[j]!='\0';i++,j++)
    {
        if(s2[j]==s1[i]){
            count++;
        }
    }

    if(count==len)
        printf("It's a Palindrome string because the original and reversed orders are same.\n");
    else
        printf("It's not a Palindrome string because the original and reversed orders are not same.\n");

    getch(0);
}
