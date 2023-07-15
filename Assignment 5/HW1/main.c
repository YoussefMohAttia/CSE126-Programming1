#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,m,sum=0,total=0;
    float avg=0;
    printf("enter matrix row size");
    scanf("%d",&n);
    printf("enter matrix column size");
    scanf("%d",&m);
    int x[n][m];
    printf("please enter Matrix x elements:\n");
    for (i=0; i<n; ++i)
    {
     for (j=0; j<m; ++j)
         scanf("%d",&x[i][j]);
    }
    printf("Matrix A:\n");
    for (i=0; i<n; ++i)
    {
     for (j=0; j<m; ++j)
         printf("%d ",x[i][j]);
    printf("\n");
    }
    for (i=0; i<n; ++i)
    {
     for (j=0; j<m; ++j)
     {
           sum+=x[i][j];
           total+=x[i][j];
     }
               printf("sum of row%d is %d",i,sum);
               sum=0;
    printf("\n");
    }
    avg= 1.0*total/(n*m);
       printf("Average of all elements = %.2f",avg);
    return 0;
}
