#include <stdio.h>
#include<string.h>
int main()
{
    char s[100],s2[100];
    printf("Enter a string\n");
    scanf("%[^\n]",s);
    int k=0;
    int l=strlen(s);
    l--;
    while(s[l]==' ')
      l--;
    for(int i=0;i<=l;i++)
    {
        if(s[i]==' ')
        {
            s2[k]='%';
            s2[++k]='2';
            s2[++k]='0';
        }
        else
        {
            s2[k]=s[i];
        }
        k++;
    }
    s2[k]='\0';
    strcpy(s,s2);
    printf("%s ",s);
    return 0;
}
