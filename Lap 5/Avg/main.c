#include <stdio.h>
#include <stdlib.h>
float average(int x[],int n) {
    int i;
    float avg=0;
    for(i=0;i<n;i++)
        avg+=(1.0* *(x+i)/n);
    return avg;
}
int main() {
    int i,n;
    float avg;
    printf("please enter array size: \n");
    scanf("%d",&n);
    int x[n];
    printf("please enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(x+i));
    }
    avg=average(x,n);
    printf("%.3f",avg);
    return 0;
}
