//Write a Program to find the number of Word in a sentence
//Prodipto Roy Dipto
//172-15-9689

#include <stdio.h>
int main()
{
    char s[100];
    int i,count = 0;

    printf("Enter sentence: ");
    gets(s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;
    }
    printf("Number of words: %d\n", count + 1);
    getch(0);
}
