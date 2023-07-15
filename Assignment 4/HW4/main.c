#include <stdio.h>
#include <stdlib.h>
int main() {
    int x[100],y[100],n,i,j;
    printf("please enter arrays size: \n");
    scanf("%d",&n);
    printf("please enter first array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("please enter second array elements: \n");
    for(i=0;i<n;i++)
    {
             scanf("%d",&y[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
           if (x[i]==y[j])
            printf("intersection number: %d\n",x[i]);
    }
    }
    return 0;
}
