//Print a string after removing extra space

#include<stdio.h>
int main()
{
    char s[100],n[100];
    int i,j;
    printf("Enter: ");
    gets(s);

    for(i=0,j=0;s[i]!='\0';i++)
    {
        if(!(s[i]==' ' && s[i+1]==' ')){
           n[j]=s[i];
           j++;
        }
    }

    n[j]='\0';

    printf("After removing extra spaces: %s\n",n);
    getch(0);
}
