#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;

class Biodata {
    protected:

    char name[100];
    char surname[100];
    char address[100];
    int mobile;
    char dob[100];
    char name_of_org[100];
    char job[100];
    char project[100];
    int year_of_passing;
    int cgpa;
    char college_name[50];
    int branch;


};

class Personal_data:public Biodata {
    public:
    void display_data1()
    {
        std::cout<<"Personal Data -> "<<endl;
        std::cout<<"Name : ";
        std::cin>>name;
        std::cout<<"Surname : ";
        std::cin>>surname;
        std::cout<<" Mobile Number : ";
        std::cin>>mobile;
        std::cout<<"Address :  ";
        std::cin>>address;
        fflush(stdin);
        std::cout<<"Date of Birth :  ";
        std::cin>>dob;
        fflush(stdin);
    }
};
class Professional_data:public Biodata{
           public:
           void display_data2(){
        std:: cout<<"Professional Data "  <<endl;
        std:: cout<<"Name of Organization : " ;
        std:: cin>>name_of_org;
        std:: cout<<"Job Profile: " ;
        std:: cin>>job ;
        std:: cout<<"Project: " ;
        std:: cin>>project ;
        }


};
  class Academic_data:public Biodata{
         public:
        void display_data3()
        {
        std:: cout<<" Academic data " << endl;
        std:: cout<<"Year of Passing: " ;
        std:: cin>>year_of_passing ;
        std:: cout<<"CGPA : " ;
        std:: cin>>cgpa;
        std:: cout<<"College Name: " ;
        std:: cin>>college_name ;
        std:: cout<<"Branch:  ";
        std:: cin>>branch;
            }

};
void call_all()
            {

           Personal_data obj;
           obj.display_data1();
           Professional_data obj_2;
           obj_2.display_data2();
           Academic_data obj_3;
           obj_3.display_data3();
           }

     int main()
  {
    call_all();
     return 0;
  }
