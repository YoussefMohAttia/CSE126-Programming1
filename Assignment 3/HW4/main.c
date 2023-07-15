#include <stdio.h>
#include <stdlib.h>
void Count_Grades (int*countA,int*countB,int*countC,int*countD,int*countF)
{
         char x;
   do{
     printf("Enter student grade ");
     scanf(" %c",&x);
     if (x=='a' || x=='A' )
        *countA+=1;
     else if (x =='b' || x=='B')
        *countB+=1;
     else if (x =='c' || x=='C')
        *countC+=1;
     else if (x =='d' || x=='D')
        *countD+=1;
     else if (x =='f' || x=='F')
        *countF+=1;
     else if (x =='Z')
        break;
    }  while (x!='z' );
}
int main()
 {
   int countA=0,countB=0,countC=0,countD=0,countF=0;
   Count_Grades(&countA,&countB,&countC,&countD,&countF);
   printf("the number of students with Grade A : %d\n",countA);
   printf("the number of students with Grade B : %d\n",countB);
   printf("the number of students with Grade C : %d\n",countC);
   printf("the number of students with Grade D : %d\n",countD);
   printf("the number of students with Grade F : %d\n",countF);
    return 0;
}

