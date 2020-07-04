#include<bits/stdc++.h>
using namespace std;
class Student
{   public:
    int roll, year;
    string name;
    double cgpa;
    int *a = new int[5];
    Student()
    {

    }
    Student(int roll_no, int yr, string name_stud)
    {
        roll = roll_no;
        year = yr;
        name = name_stud;
        cgpa = 9.5;

    }
    int total_marks(int *arr1)
    {
        return arr1[0] + arr1[1] +arr1[2] + arr1[3] + arr1[4] ;
    }
    void cal_cgpa(int *arr)
    {
        cgpa = total_marks(arr) / 45 ;


    }
    void Input()
    {
        cout << "Enter Data " << endl;
        cout <<"Enter roll no : ";
        cin >> roll ;
        cout <<"Enter Name : ";
        cin >> name ;
        cout <<"Enter Year of Study : ";
        cin >> year ;
        cout <<"Enter Marks of Subject 1: ";
        cin >> a[0] ;
        cout <<"Enter Marks of Subject 2: ";
        cin >> a[1] ;
        cout <<"Enter Marks of Subject 3 : ";
        cin >> a[2] ;
        cout <<"Enter Marks of Subject 4: ";
        cin >> a[3] ;
        cout <<"Enter Marks of Subject 5: ";
        cin >> a[4] ;
        cal_cgpa(a);


    }
    void Display()
    {
        cout << "Name :" << name << endl ;
        cout << "Roll No :" << roll << endl ;
        cout << "CGPA :" << cgpa << endl ;
        cout << "Year :" << year<< endl ;
    }
};
class Ext_Stud:public Student
{    public:
     void show_rank(int rank)
     {   cout << "Show rank with rank as parameter";
         cout << "Rank : " << rank;
     }
     void show_rank(Student S)
     {   cout << "Show rank with only Student as parameter";
         S.Display();
         cout << " No rank";
     }
     void show_rank(Student S, int rank)
     {   cout << "Show rank with student andrank as parameter";
         S.Display();
         cout << "Rank : " << rank ;
     }

};
int main()
{
    Student S1;
    S1.Input();
    S1.Display();
    Ext_Stud Ext;
    int rank;
    cout << "Enter rank";
    cin >> rank;
    Ext.show_rank(S1);
    Ext.show_rank(S1, rank);
    Ext.show_rank(rank)

}
