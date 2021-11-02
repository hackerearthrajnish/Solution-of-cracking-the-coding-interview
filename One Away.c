#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int f1[122],f2[122];
int main()
{
    char s1[50],s2[50];
    int i;
    printf("Enter first string\n");
    scanf("%s",s1);
    printf("Enter second string\n");
    scanf("%s",s2);
    int l1,l2,l;
    l1=strlen(s1);
    l2=strlen(s2);
    
    // minimum length
    l=l1>l2?l2:l1;
    int edits=0,flag=0;
    
    // if diff of length is greater than 1
    if(abs(l1-l2)>1)
       printf("False");
    else
    {
        int i,j;
        for(i=0,j=0;j<l;i++)
        {
            if(s1[i]!=s2[j])
            {
                if(edits!=0)
                {
                    flag=1;
                    break;
                }
                edits++;
                if(l1==l2)
                   j++;
            }
            else
              j++;
            
        }
        if(flag==1)
           printf("False");
        else
          printf("Ture");
    }
}
