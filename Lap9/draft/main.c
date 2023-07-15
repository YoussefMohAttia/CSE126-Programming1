#include <stdio.h>
#include <stdlib.h>
int main()
{
 FILE *fp;
 int wrd=0,lett=0,lenght=0;
 char ch;
 fp=fopen("Lab9.txt","r");
 if(fp==NULL)
 {
   printf("error");
   exit(1);
 }
 ch=fgetc(fp);
 while (ch!=EOF)
 {
     if(ch==' ' || ch=='\n')
        wrd++;
     else
        lett++;
    ch=fgetc(fp);
 }
   lenght=ftell(fp);
  printf("word=%d char=%d len=%d",wrd+1,lett,lenght);


  fclose(fp);
 return 0;
}
