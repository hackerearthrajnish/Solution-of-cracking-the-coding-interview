/* Implement an algorithm to determine if a string has all unique charater */
#include<stdio.h>
#include<string.h>
int fre[122];
int main()
{
    char s[50];
    int i;
    printf("Enter a string \n");
    scanf("%[^\n]",s);
    for(int i=0;s[i];i++)
    {
        int a=s[i];
        fre[a]++;
    }
    
    for( i=0;i<=122;i++)
    {
        if(fre[i]>1)
        {
            printf("Not unique\n");
            break;
        }
    }
    if(i==123)
      printf("All characters are  unique\n");
    return 0;
}
