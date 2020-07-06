//Identifying comment

#include<stdio.h>
int main()
{
    char com[100];
    int i=2,a=0;

    printf("Enter:  ");
    gets(com);

    if(com[0]=='/'){
        if(com[1]=='/')
            printf("It's a comment.");
        else if(com[1]=='*')
        {
            for(i=2;i<=30;i++)
            {
                if(com[i]=='*' && com[i+1]=='/')
                {
                    printf("It's a comment");
                    a=1;
                    break;
                }
                else
                    continue;
            }
            if(a==0)
                printf("It's not a comment.");
        }
        else
            printf("It's not a comment.");
    }
    else
        printf("It's not a comment.");

    getch(0);
}
