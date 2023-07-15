#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int day;
    int month;
    int year;
}date;
typedef struct{
    int id;
    char name[50];
    float gpa;
    date d;
}student;

 void readstudent(student x[],int n)
 {
     int i;
     for(i=0;i<n;i++)
     {
     printf("enter id:");
     scanf("%d",&x[i].id);
     getchar();
     printf("enter name:");
     gets(x[i].name);
     printf("enter gpa:");
     scanf("%f",&x[i].gpa);
     printf("enter day:");
     scanf("%d",&x[i].d.day);
     printf("enter month:");
     scanf("%d",&x[i].d.month);
     printf("enter year:");
     scanf("%d",&x[i].d.year);
     }
 }

 void printmoreaverage(student x[],int n)
 {
     int i,sum=0,count=0;
     float avg;
     for(i=0;i<n;i++)
     {
     sum+= x[i].gpa ;
     }
     avg=(float)sum/n;

     for(i=0;i<n;i++)
     {
      if(x[i].gpa > avg)
      {
        printf("%s\n",x[i].name);
        count++;
      }

     }
     if(count==0)
        printf("no one above avg");
 }

 void printstudents(student x[],int n,int year)
 {
     int i,count=0;
     for(i=0;i<n;i++)
     {
      if((x[i].d.year)==year)
      {
        printf("%s\n",x[i].name);
        count++;
      }
     }
     if(count==0)
        printf("no one born on this year");
 }

int main()
{
   int n,year;
   printf("pls enter number of students");
   scanf("%d",&n);
   printf("pls enter year to compare");
   scanf("%d",&year);
   student x[n];
   readstudent(x,n);
   printmoreaverage(x,n);
   printstudents(x,n,year);
}
