#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter a string\n");
    scanf("%s",s);
    int l=strlen(s);
    char ans[50];
    int a[50]={0},k=0;
    for(int i=0;s[i];)
    {
        int count=0;
        ans[k]=s[i];
        while(s[i]==ans[k] && s[i]!='\0')
        {
            count++;
            i++;
        }
        // converting integer into character
        char ch=count+'0';
        k++;
        ans[k]=ch;
        k++;
    }
    ans[k]='\0';
    if(k<l)
     printf("%s",ans);
    else
      printf("%s",s);
    return 0;
}