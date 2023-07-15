#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float real;
    float img;
}complex;

complex Add_complex(complex a,complex b)
 {
     complex x;
     x.real=a.real+b.real;
     x.img=a.img+b.img;
     return x;
 }

void print_complex(complex a)
 {
     printf(" %.2f+%.2fi\n",a.real,a.img);
 }

complex read_complex()
{
     complex z;
     printf("enter the real then the imaginery part of the complex number");
     scanf("%f%f",&z.real,&z.img);
     return z;
 }
int compare_complex(complex a,complex b)
 {
     if(pow(a.img*a.img+a.real*a.real,0.5)>pow(b.img*b.img+b.real*b.real,0.5))
     return 1;
     else if(pow(a.img*a.img+a.real*a.real,0.5)<pow(b.img*b.img+b.real*b.real,0.5))
     return -1;
     else
     return 0;
 }
int main()
{
    int i;
    complex sum;
    complex x=read_complex(),y=read_complex(),z=read_complex();
    print_complex(x);
    print_complex(y);
    print_complex(z);
    sum.img=0;
    sum.real=0;
    sum= Add_complex(Add_complex(x,y),z);
    printf("the sum of the complex numbers is ");
    print_complex(sum);
    if(compare_complex(x,y)==1)
    {
        if (compare_complex(x,z)==1)
        {
            printf("the number with highest magnitude is ");
            print_complex(x);
        }
        else
        {
            printf("the number with highest magnitude is ");
            print_complex(z);
        }
    }
        else if(compare_complex(x,y)==-1)
    {
        if (compare_complex(y,z)==1)
        {
            printf("the number with highest magnitude is ");
            print_complex(y);
        }
        else
        {
            printf("the number with highest magnitude is ");
            print_complex(z);
        }
    }

}
