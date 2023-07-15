#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int convertToDecimal(int x)
{
    int i,sum=0,t;
    for(i=0;x!=0;i++)
    {
      sum+=(x%10)*pow(8,i);
      x=x/10;
    }
    return sum;
}
int main()
{
    int x,t,Dec;
    printf("Please Enter a Number\n");
    scanf("%d",&x);
    Dec=convertToDecimal(x);
    printf("%d octal equal to %d in decimal\n",x,Dec);
    return 0;
}
