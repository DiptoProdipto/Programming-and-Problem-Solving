//Read a sentence and prints the words that starts with 'A' or 'a'
//Unsolved and bugs

#include<stdio.h>
int main()
{
    char s[100],n[100];
    int i,j,count=0;
    printf("Enter Sentence: ");
    gets(s);

    for(i=0; s[i]!='\0'; i++)
    {
        if((s[i]=='A' || s[i]=='a') && i==0)
        {
            for(i=i,j=0;s[i]!=' '; i++)
            {
                printf("%c",s[i]);
            }
            printf("\n");
            count++;
        }

        else if((s[i]=='A' || s[i]=='a') && s[i-1]==' ')
        {
            for(/*j=j,i=i*/; s[i]!=' '; i++)
            {
                //n[j]=s[i];
                //j++;
                printf("%c",s[i]);
            }
            printf("\n");
            count++;
        }

    }
    //n[j]='\0';

    printf("Count: %d\n",count);

    /*if(count!=0)
    {


        printf("new: %s",n);
    }
    else
    {
        printf("There is no word that started with 'A' or 'a'.\n");
    }*/
    //getch(0);
}
