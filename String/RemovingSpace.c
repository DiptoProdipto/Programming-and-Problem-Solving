//Take a Sentence and copy it without any space.

#include<stdio.h>
int main()
{
    char s[100], n[100], q[100];
    int i,j,k;

    printf("Enter sentence: ");
    gets(s);

    for(i=0,j=0,k=0;s[i]!='\0';i++)
    {
        if(s[i]!=' '){
                n[j]=s[i];
                j++;
        }

        else if(s[i]==' '){
            q[k]=s[i];
            k++;
        }
    }

    n[j]='\0';
    q[k]='\0';

    printf("New: %s\n",n);

}

