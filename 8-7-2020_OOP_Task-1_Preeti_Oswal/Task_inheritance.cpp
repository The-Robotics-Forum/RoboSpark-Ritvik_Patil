#include<bits/stdc++.h>
using namespace std;
class Personal
{
protected:
    string name, surname, address, dob;
    int *mob = new int[10];
public:
    Personal()
    {    cout << "In Personal Constructor" << endl;
        //default constructor;
    }
    Personal(string name, string surname , string address , int *mob ,string dob)
    {
        this -> name = name;
        this -> surname = surname;
        this -> address = address;
        this -> dob = dob;
        for(int i = 0;i < 10; i++)
        {
            mob[i] = 0;
        }
    }
    ~Personal()
    {
        delete []mob;
    }
    void getInput()
    {
        cout << "Enter Your Data" << endl;
        cout << "Enter Name: " ;
        cin >> name;
        cout << "Enter Surname: " ;
        cin >> surname;
        cout << "Enter Addrsss: " ;
        cin >> address;
        cout << "Enter Data of Birth: " ;
        cin >> dob;
        cout << "Enter Moblie Number: " ;
        for(int i= 0; i < 10; i++)
            cin >> mob[i];

        fflush(stdin);
    }

};


class Professional
{
protected:
    string org_name, job_profile , project;
public:
    Professional()
    {    cout << "In Professional Constructor" << endl;
        //default constructor;
    }
    Professional(string org_name, string job_profile , string project )
    {
        this -> org_name = org_name;
        this -> job_profile = job_profile;
        this -> project = project;

    }
    void getInput()
    {
        cout << "Enter Professional Data" << endl;
        cout << "Enter the name of the Organization: " ;
        cin >> org_name ;
        cout << "Enter Job Profile: " ;
        cin >> job_profile;
        cout << "Enter Project: " ;
        cin >> project;
    }

};

class Academic
{
protected:
    string college_name , branch;
    int year , cgpa ;
public:
    Academic()
    {   cout << "In Academic Constructor" << endl;
        //default constructor;
    }
    Academic(string college_name, int year , int cgpa , string branch )
    {
        this -> college_name = college_name;
        this -> year = year;
        this -> cgpa = cgpa;
        this -> branch = branch;

    }
    void getInput()
    {
        cout << "Enter Academic Data" << endl;
        cout << "Enter the name of the College: " ;
        cin >> college_name ;
        cout << "Enter year of passing: " ;
        cin >> year;
        cout << "Enter CGPA: " ;
        cin >> cgpa;
        cout << "Enter branch: ";
        cin >> branch;

    }

};

class Biodata :public Personal,public Professional,public Academic
{
public:
    Biodata()
    {
        cout << "In Biodata Constructor" << endl;
    }
    void getInput()
    {
         Personal :: getInput();
         Professional :: getInput();
         Academic :: getInput();
        }
   void Display()
   {
       cout << "DATA : " << endl << endl;
       cout << "Your Data" << endl;
        cout << "Name: " <<  name<< endl;
        cout << "Surname: " << surname << endl;
        cout << "Addrsss: " << address<< endl;
        cout << "Data of Birth: " << dob << endl;
        cout << "Professional Data" << endl;
        cout << "Name of the Organization: "<< org_name << endl ;

        cout << "Job Profile: " << org_name << endl;
        cout << "Project: " <<  project << endl;
        cout << "Academic Data" << endl;
        cout << "Name of the College: " << college_name << endl;
        cout << "Year of passing: " << year << endl;
        cout << "Enter CGPA: " << cgpa << endl;
        cout << "Enter branch: " << branch << endl;}


};
int main()
{
    Biodata b1;
    b1.getInput();
    b1.Display();

}






