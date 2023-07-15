#include <stdio.h>
#include <stdlib.h>
int checkprime(int x)
{
    int i,prime=1;
    if (x==0 || x==1 )
        prime=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            prime=0;
    }
    return prime;
}
int Count (int n, int m, int a[n][m])
{
     int i,j,c;
        for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
         if(checkprime(a[i][j])==1)
         {
            c++;
         }
        }
    }
    return c;
}
int main()
{
    int i,j,n,m,counter=0;
    printf("enter matrix row size");
    scanf("%d",&n);
    printf("enter matrix column size");
    scanf("%d",&m);
    int a[n][m];
    printf("enter matrix elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
     printf("your matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
         printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    counter=Count(n,m,a);
    printf("\n count of prime numbers in the array is : %d \n",counter);
}
