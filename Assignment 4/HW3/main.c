#include <stdio.h>
#include <stdlib.h>
int check(int x[],int n,int min)
{
   if(n<0)
        return min;
    if (x[n]<min)
        min=x[n];
    check(x,n-1,min);
}
int main()
{
    int x[100],n,i,result,min;
    printf("please enter array size: \n");
    scanf("%d",&n);
    printf("please enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    min=x[n];
   result=check(x,n,min);
   printf("\n the smallest value in the array is %d",result);
    return 0;
}
