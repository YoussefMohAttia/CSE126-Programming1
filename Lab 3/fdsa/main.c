#include <stdio.h>
void f (int* a, int b)
{ int k;
 for (k=3; k>=1; k--)
 {
 a[k]--;
 b=a[k];
 }
}
int main()
{
int x[6] = {1, 2, 3, 4, 5, 6};
 int* y, z, i;
 y = x + 2;
 z = *y - 2;
 f(x,z);
 *y = *y + 5;
 for (i=0; i<=5; i++)
 printf("%d ",x[i]);

 printf("%d %d\n",*y, z);
return 0;
}
