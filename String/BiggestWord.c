//Write a program to print the biggest word in a given sentence

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i,j=0,l=0,count=0,k;
    printf("Enter sentence: ");
    gets(a);

    for(i=0; a[i]!='\0'; i++)
    {
        count++;
    }

    for(i=0; i<=count; i++)
    {
        if(a[i]!=' ' && a[i]!='\0')
        {
            b[j++]=a[i];
        }

        else
        {
            b[j]='\0';
            if(strlen(b)>l)
            {
                strcpy(c,b);
                l=strlen(b);
            }
            j=0;
        }
    }
    for(k=0;c[k]!='\0';k++);

    printf("Biggest word: %s\nand\nthe length is: %d\n",c,k);
    getch(0);
}
