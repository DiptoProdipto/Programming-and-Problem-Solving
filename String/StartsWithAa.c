//Read a sentence and prints the words that starts with 'A' or 'a'
//Full complete without any bug

#include<stdio.h>
void main()
{
    int i;
    char a[100];
    printf("Enter string: ");
    gets(a);
    for(i=0; a[i]!='\0'; i++)
    {
        if((a[i]=='A' || a[i]=='a') && i==0)
        {
            for(;(a[i]!=' ' && a[i]!='\0');i++)
            {
                printf("%c",a[i]);
            }
            printf("\n");
        }
        else if((a[i]=='A' || a[i]=='a') && a[i-1]==' ')
        {
            for(;(a[i]!=' ' && a[i]!='\0');i++)
            {
                printf("%c",a[i]);
            }
              printf("\n");
        }
    }

}

