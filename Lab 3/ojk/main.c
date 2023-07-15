#include <stdio.h>
#include <stdlib.h>

int fun(int a,int*b)
{
    *b=(a+3)*2+(*b)%4;
    a=*b-a%6;
    printf("a=%d,b=%d\n",a,*b);
    return 2*a-(*b);
}
int main()
{
    int a=3,b=7,c=4;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    c=fun(b,&a)+3;
    printf("a=%d,b=%d,c=%d",a,b,c);
}
