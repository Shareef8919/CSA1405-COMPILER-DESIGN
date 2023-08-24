#include <stdio.h>
#include <string.h>
int main()
{
    char grammar[100];
    int i, len, flag;
    printf("Enter a grammar: ");
    gets(grammar);
    len = strlen(grammar);
    flag = 0;
    for(i=0;i<len;i++)
    {
        if(grammar[i]=='=')
        {
            if(grammar[i+1]=='>')
            {
                if(grammar[i+2]==grammar[i-1])
                {
                    flag = 1;
                    break;
                }
            }
        }
    }
    if(flag==1)
        printf("%s is ambiguous", grammar);
    else
        printf("%s is not ambiguous", grammar);
    return 0;
}

