#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int checkprime(int x)
{
    int i,prime=1;
    if(x==0||x==1)
        prime=0;
    for (i=2;i<x; i++)
    {
     if(x%i==0)
        prime=0;
    }
    return prime;
}
int checknumber(int x)
{
    int i,y=0;
       for (i=2;i<=x/2; i++)
    {
      if (checkprime(i)==1)
    {
      if (checkprime(x-i)==1)
      {
        printf("%d = %d+%d\n",x,i,x-i);
        y=1;
      }
    }
    }
       if (y==1)
       printf("%d can be expressed as a Sum of Two Prime Numbers.",x);
}
int main()
{
    int x;
    printf("Please Enter a Number\n");
    scanf("%d",&x);
    checknumber(x);
    return 0;
}
