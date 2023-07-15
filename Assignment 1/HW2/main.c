#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num,i;
    float x,total,y;
    printf("Please Enter a Number\n");
    scanf("%f",&x);
    printf("Please Enter of terms\n");
    scanf("%d",&num);
    y=x
    x=x*3.14/180;
    total=x;
    for(i=1;i<=num;i++)
    {
      y=y*(-1)*x*x/(2*i*(2*i+1));
      total+=y;
    }
        printf ("sin of the number =%.2f",total);
    return 0;
}
