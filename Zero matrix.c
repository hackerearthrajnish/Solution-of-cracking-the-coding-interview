#include<stdio.h>
int main()
{
    int a[10][10],n,m;
    printf("Enter no of row and no of column\n");
    scanf("%d%d",&n,&m);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
          scanf("%d",&a[i][j]);
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                flag=1;
                break;
            }
        }
    }
    
    printf("The Resultant matrix is:-\n");
    if(flag==1)
    {
       for(int i=0;i<n;i++)
       {
            for(int j=0;j<n;j++)
            {
                a[i][j]=0;
                printf("%d ",a[i][j]);
            }
            printf("\n");
                
       } 
    }
    else
    {
       for(int i=0;i<n;i++)
       {
            for(int j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
                
       } 
    }
    return 0;
}
