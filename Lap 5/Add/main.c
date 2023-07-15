#include <stdio.h>
#include <stdlib.h>
int sum(int n,int x[n][n])
{
    int i,j,sum=0;
    for (i=0; i<n; ++i)
    {
     for (j=0; j<n; ++j)
       {
           if(i==j || (i+j)==(n-1))
            sum+=x[i][j];
       }
    }
    return sum;
    }

int main()
{
    int i,j,n,s;
    printf("enter matrix size");
    scanf("%d",&n);
    int x[n][n];
    printf("please enter Matrix x elements:\n");
    for (i=0; i<n; ++i)
    {
     for (j=0; j<n; ++j)
         scanf("%d",&x[i][j]);
    }
    printf("Matrix A:\n");
    for (i=0; i<n; ++i)
    {
     for (j=0; j<n; ++j)
         printf("%d ",x[i][j]);
    printf("\n");
    }
     s=sum(n,x);
     printf("%d",s);
    return 0;
    }
