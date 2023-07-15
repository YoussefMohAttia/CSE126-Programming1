#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,i,count=0,sum=0;
    printf("Please Enter a Number\n");
    scanf("%d",&x);
    for(i=x;i!=0;i=i/10)
    {
      count ++;
    }

       for(i=x;i!=0;i=i/10)
    {
        sum+=pow((i%10),count);
    }
       if (sum==x)
        printf ("This number is Armstrong number");
       else
        printf ("This number is not Armstrong number");
    return 0;
}
