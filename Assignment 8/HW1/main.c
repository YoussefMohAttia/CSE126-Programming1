#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int num;
    int denom;
}frac;

frac Multiply_fractions(frac n,frac m)
 {
     frac x;
     x.num=n.num*m.num;
     x.denom=n.denom*m.denom;
     return x;
 }

frac divide_fractions(frac n,frac m)
 {
     frac y;
     y.num=n.num*m.denom;
     y.denom=n.denom*m.num;
     return y;
 }

frac add_fractions(frac n,frac m)
 {
     frac z;
     z.num=(n.num*m.denom) + (n.denom*m.num);
     z.denom=n.denom*m.denom;
     return z;
 }

int main()
{
   frac n,m,N;
   n.num=3;
   n.denom=4;
   m.num=1;
   m.denom=2;
   N=Multiply_fractions(n,m);
   printf("result of subtract n to m %d / %d",N.num,N.denom);
}
