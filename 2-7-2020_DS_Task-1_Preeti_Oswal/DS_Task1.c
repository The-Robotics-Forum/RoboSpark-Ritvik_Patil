#include <stdio.h>
#include <stdlib.h>
struct Student{
   int stud_id,stud_year;
   char stud_name[20];
   float stud_cgpa;
};
int main(){
   struct Student S[4];
   int i;
   for(i = 0; i < 4; i++)
   {
       printf("\n\nEnter Student %d id :",i+1);
       scanf("%d",&S[i].stud_id);

       printf("\nEnter Student %d Name :",i+1);
       scanf("%s",S[i].stud_name);
       fflush(stdin);

       printf("\nEnter Student %d Year :",i+1);
       scanf("%d",&S[i].stud_year);

       printf("\nEnter Student %d CGPA :",i+1);
       scanf("%f",&S[i].stud_cgpa);

   }
   printf("\n\n");
   for(i = 0;i < 4; i++)
   {
       printf("\nStudent %d id is :%d", i+1, S[i].stud_id);
       printf("\nStudent %d Name is :%s", i+1, S[i].stud_name);
       printf("\nStudent %d Year is :%d" ,i+1, S[i].stud_year);
       printf("\nStudent %d CGPA is :%0.2f\n\n" ,i+1, S[i].stud_cgpa);
   }
}
