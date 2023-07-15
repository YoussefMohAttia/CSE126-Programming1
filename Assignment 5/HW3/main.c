#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,temp;
    printf("enter array size");
    scanf("%d",&n);
    int a[n];
    printf("please enter Array elements:\n");
    for (i=0; i<n; ++i)
    {
         scanf("%d",(a+i));
    }
    printf("Array before reverse:\n");
    for (i=0; i<n; ++i)
    {
         printf("%d ",*(a+i));
    }
        for (i=0; i<n/2; i++)
    {
           temp=*(a+i);
           *(a+i)=*(a+n-i-1);
           *(a+n-i-1)=temp;
    }
    printf("\nArray After reverse:\n");
    for (i=0; i<n; ++i)
    {
         printf("%d ",a[i]);
    }
    return 0;
}
