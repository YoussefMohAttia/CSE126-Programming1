#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int n)
{
      int i,fact=1;
      for (i = 1; i <= n; i++)
        {
        fact *=i;
        }
        printf("%d\n",fact);
        return fact;
}
int main()
{
    int n,i,count=1;
    float sum=0;
    printf("Please Enter a Number\n");
    scanf("%d",&n);
    for(i=1;count<=n;i++)
    {
     if (i%2!=0)
     {
     count++;
     sum+=(i*1.0)/(factorial(i+1));
     }
     else
        continue;
    }
     printf ("%.4f",sum);
    return 0;
}
