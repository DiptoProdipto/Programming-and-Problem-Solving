//Take a Sentence and copy it without any space.
//Another way

#include<stdio.h>
int main()
{
    char s[100], n[100];
    int i,j;

    printf("Enter sentence: ");
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(i==0){
            for(i=i,j=0;s[i]!=' ' && s[i]!='\0';i++){
                n[j]=s[i];
                j++;
            }
        }
        else if(s[i]!=' ' && s[i-1]==' '){
            for(j=j,i=i;s[i]!=' ' && s[i]!='\0';i++){
                n[j]=s[i];
                j++;
            }
        }
    }

    n[j]='\0';

    printf("New: %s\n",n);


}
