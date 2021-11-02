#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int f1[122],f2[122];
int main()
{
    char s1[50],s2[50];
    printf("Enter the first string\n");
    scanf("%[^\n]",s1);
    // counting of frequency of the characters of first string
    for(int i=0;s1[i];i++)
    {
        int a=s1[i];
        f1[a]++;
    }
    fflush(stdin);
    printf("Enter the second string\n");
    scanf("%s",s2);
    // counting of frequency of the characters of first string
    for(int i=0;s2[i];i++)
    {
        int a=s2[i];
        f2[a]++;
    }
    // checking of permutation
    int i;
    for(i=0;i<=122;i++)
    {
        if(f1[i]!=f2[i])
        {
            printf("Strings are not permutation of each other\n");
            break;
        }
    }
    if(i==123)
      printf("permutation string");
    
}