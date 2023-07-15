#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
        if(n>=1)
        {
         if(n%2==0 || n%3==0)
        {
          return n+sum(n-1);
        }
         else return sum(n-1);
        }
        else
        return 0;
}
int main() {
    int n,result;
    printf("please enter a number: ");
    scanf("%d",&n);
    result = sum(n);
    printf("\nsum of numbers from 1 to %d that are divisible by 2 or 3 : %d\n",n, result);
    return 0;
}
