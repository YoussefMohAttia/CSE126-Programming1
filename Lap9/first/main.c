#include <stdio.h>
#include <stdlib.h>
typedef struct
{
char name[30];
int ID;
float GPA;
} Student;

int readStudents(Student s[],int count)
{
FILE *f1;
f1=fopen("students.txt","r");
while(!feof(f1))
{
fscanf(f1,"%s",&s[count].name);
fscanf(f1,"%d",&s[count].ID);
fscanf(f1,"%f\n",&s[count].GPA);
count++;
}
fclose(f1);
return count;
}

void printStudents(Student s[],int x)
{
int i;
for(i=0; i<x; i++)
{
printf("Name:%s\n",s[i].name);
printf("ID:%d\n",s[i].ID);
printf("GPA:%.1f\n\n",s[i].GPA);
}
}

int main()
{
Student s[100];
int count=0,x;
x=readStudents(s,count);
printStudents(s,x);
return 0;
}
