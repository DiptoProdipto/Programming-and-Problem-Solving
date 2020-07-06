//Split word in new line after getting white space

#include<stdio.h>
int main()
{
    char s1[100];
    int i;

    printf("Enter: ");
    gets(s1);

    for(i=0;s1[i]!='\0';i++)
    {

        if(s1[i]==' ' && s1[i+1]!=' '){
            s1[i]='\n';
        }
    }

    printf("%s\n",s1);
    getch(0);
}
