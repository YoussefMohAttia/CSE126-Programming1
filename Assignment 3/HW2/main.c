#include <stdio.h>
#include <stdlib.h>

void printNumbers(int x, int y)
{
        if(x>y)
        {
          printf("%d  ",x);
          return printNumbers(x-1,y);
        }
        else
        return 0;
}
int main() {
    int x,y;
    printf("please enter first number: ");
    scanf("%d",&x);
    printf("please enter second number: ");
    scanf("%d",&y);
    if(x>y)
    printNumbers(x-1,y);
    else
    printNumbers(y-1,x);
    return 0;
}
