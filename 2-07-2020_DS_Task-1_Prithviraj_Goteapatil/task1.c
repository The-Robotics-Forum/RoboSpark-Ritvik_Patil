#include <stdio.h>
struct College
    {
        int id;
        char name[30];
        int year;
        float score;
    };

int main()
{
    int n=5;
    struct College student[n];
    for(int i=0;i<=4;i++)
    {
        printf("\nEnter student's name : ");
        scanf("%s",&student[i].name);
        printf("\nEnter student's ID : ");
        scanf("%d",&student[i].id);
        printf("\nEnter year of student : ");
        scanf("%d",&student[i].year);
        printf("\nEnter student's CGPA score : ");
        scanf("%f",&student[i].score);
    }
    printf("\n\nHere is info of all students:-\n\n");
    for(int i=0;i<=4;i++)
    {
        printf("\n Name of student is %s",student[i].name);
        printf("\n Their ID is %d",student[i].id);
        printf("\n The student is in %d year",student[i].year);
        printf("\n Their CGPA was %f \n",student[i].score);
    }
}
    
