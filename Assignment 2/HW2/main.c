#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int CheckNumber (int x)
{
    int i,sum=0,flag,count=0,total=0,armstrong=0,prime=1,perfect=0;

        for (i = 2; i<x; i++)
    {
        if (x % i == 0)
          prime = 0;
    }

    for(i=1;i<x;i++)
    {
      if (x%i==0)
        total+=i;
    }
      if (total==x)
        perfect=1;


        for(i=x;i!=0;i=i/10)
    {
      count ++;
    }
       for(i=x;i!=0;i=i/10)
    {
        sum+=pow((i%10),count);
    }
       if (sum==x)
        armstrong=1;


    if (prime==1&& armstrong==0&&perfect==0)
         flag=0;
    else if (perfect==1&&armstrong==0&&prime==0)
         flag=1;
    else if (armstrong==1&&perfect==0&&prime==0)
         flag=2;
    else if (armstrong==1 && perfect==1)
         flag=3;
    else if (prime==1 && armstrong==1)
         flag=4;
    else
         flag=5;

    return flag;
}

int main()
{
    int x,result;
    printf("Please Enter a Number\n");
    scanf("%d",&x);
    result=CheckNumber(x);
    switch (result) {
        case 0:printf("%d is a prime number",x);
        break;
        case 1:printf("%d is a perfect number",x);
        break;
        case 2:printf("%d is a Armstrong number",x);
        break;
        case 3:printf("%d is a perfect & Arstrong number",x);
        break;
        case 4:printf("%d is a prime & Armstrong number",x);
        break;
        default:printf("%d is none of the above",x);
        }
    return 0;
}
