#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,n,count=0;
    printf("please enter array size: \n");
    scanf("%d",&n);
    int x[n];
    printf("please enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(x+i));
    }
        for(i=0;i<n;i++)
    {
        if(*(x+i)%3==0 && *(x+i)%5==0)
        count++;
    }
    printf("amount of elements div. by 3 or 5 is %d",count);
    return 0;
}
