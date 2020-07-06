//Removing Comments

#include <stdio.h>

void remove_cmmnt(char *s)
{
    int i,j,count=0;
    for(i=j=0; s[j] ;  )
    {
        if(s[j]=='/' && s[j+1] && s[j+1]=='/'){
            for(j+=2; s[j] && s[j++]!='\n';  )	;
            count++;
        }
        else if(s[j]=='/' && s[j+1] && s[j+1]=='*'){
            for(j+=2; s[j] && s[++j] && (s[j-1]!='*' || s[j]!='/' || !j++); );
            count++;
        }
        else
            s[i++]=s[j++];
    }
    s[i]='\0';
    printf("Total comments: %d\n",count);
}

int main()
{
    char s[100];
    printf("Enter: ");
    gets(s);
    remove_cmmnt(s);
    printf("After removing comments:\n %s",s);
    getch(0);
}
