#include <stdio.h>
#include <stdlib.h>

void marks(int x,int y,int z)
{
    float avg;
    int pass=0,fail=0;
    avg = (x+y+z)/3.0;
    if (x>=50)
        pass++;
      else fail++;
    if (y>=50)
        pass++;
      else fail++;
    if (z>=50)
        pass++;
      else fail++;
    printf("pass=%d , fail=%d\n",pass,fail);
    printf("Average of the 3 marks = %.2f\n",avg);
}
int main()
 {
    int x,y,z;
    printf("Enter first mark: ");
    scanf("%d",&x);
    printf("Enter second mark: ");
    scanf("%d",&y);
    printf("Enter third mark: ");
    scanf("%d",&z);
    marks(x,y,z);
    return 0;
}

