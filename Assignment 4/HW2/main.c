#include <stdio.h>
#include <stdlib.h>
int check(int x[],int n,int*prime,int*perfect)
{
    int i,j,total=0,count;
      for (j=0; j<n; j++)
      {
          if(x[j]==1 || x[j]==0)
            continue;
        count=0;
        for (i = 2; i<x[j]; i++)
      {
        if (x[j] % i == 0)
          count++;
      }
         if(count==0)
           *prime+=1;
      }

     for (j=0; j<n; j++)
     {
       if(x[j]==1 || x[j]==0)
       continue;
       total=0;
       for(i=1;i<x[j];i++)
    {
      if (x[j]%i==0)
        total+=i;
    }
      if (total==x[j])
        *perfect+=1;
     }

}
int main()
{
    int x[100],n,i,prime=0,perfect=0;
    printf("please enter array size: \n");
    scanf("%d",&n);
    printf("please enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
   check(x,n,&prime,&perfect);
   printf("prime=%d perfect=%d\n",prime,perfect);
    return 0;
}
