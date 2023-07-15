#include <stdio.h>
#include <stdlib.h>
void Sort (int *a, int n)
{
        int i,temp,j;
    for (i=0; i<n; i++)
    {
    for (j=0; j<n; j++)
    {
         if(*(a+j)<*(a+j+1))
         {
           temp=*(a+j);
           *(a+j)=*(a+j+1);
           *(a+j+1)=temp;
         }
    }
    }
}
int main()
{
    int i,n;
    printf("enter array size");
    scanf("%d",&n);
    int a[n];
    printf("please enter Array elements:\n");
    for (i=0; i<n; ++i)
    {
         scanf("%d",(a+i));
    }
    printf("Array before sort:\n");
    for (i=0; i<n; ++i)
    {
         printf("%d ",*(a+i));
    }
    Sort(a,n);
    printf("\nArray After sort:\n");
    for (i=0; i<n; ++i)
    {
         printf("%d ",*(a+i));
    }
    return 0;
}
