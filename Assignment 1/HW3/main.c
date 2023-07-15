#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int b,i;
    float a,y=1;
    printf("Please Enter an integer\n");
    scanf("%d",&b);
    printf("Please Enter a float\n");
    scanf("%f",&a);
    for(i=0;i<b;i++)
    {
      y*=a;
    }
    printf("y=%.2f",y);
    return 0;
}
