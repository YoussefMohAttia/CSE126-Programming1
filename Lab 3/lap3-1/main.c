#include <stdio.h>
#include <stdlib.h>
int callreference(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("%d %d\n",*a,*b);
}

int callvalue(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
}

int main()
{
    int a,b;
    printf("pls enter two numbers\n");
    scanf("%d%d",&a,&b);
    callvalue(a,b);
    printf("after call by Value : %d %d\n",a,b);
    callreference(&a,&b);
    printf("after call by reference: %d %d\n",a,b);
    return 0;
}
