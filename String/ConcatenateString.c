//Concatenation of two string without library function

#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i,j;
    printf("Enter str1: ");
    gets(s1);
    printf("Enter str2: ");
    gets(s2);

    for(i=0;s1[i]!='\0';i++);
    s1[i]=' ';

    for(i=i+1,j=0;s2[j]!='\0';i++){
        s1[i]=s2[j];
        j++;
    }

    s1[i]='\0';
    printf("After concatenation: %s",s1);
    getch(0);
}
