#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    float sub[5];
    //float cgpa;

    student()
    {
        name = "default name";
        for(int i=0;i<5;i++)
        {
        sub[i] = 0;
        }
    }

    void getInput()
    {
        cout << "Give the input:\n";
        cout << "Name: ";
        cin >> name;
        for(int i=0;i<5;i++)
        {
        cout << "Marks in sub "<< i+1 << endl;
        cin >> sub[i];
        }
    }

    int total()
    {
        int k = 0;
        for(int i=0;i<5;i++)
        {
            k = sub[i] + k;
        }
        return k;
    }

    float Percentage()
    {
        float k = total();
        float cgpa = (k/50)*100;
        return cgpa;
    }

    void showDetails()
    {
        int k = total();
        float cgpa = Percentage(); 
        cout << "Name: " << name << "\n";
        for(int i=0; i<5; i++)
        {
        cout << "Marks in subject " << i+1 <<" are "<< sub[i] <<endl;
        }
        cout << "CGPA: " << cgpa << endl;
        cout << "Total: " << k << endl;

    }
};



class Rank
{

    
    public:
        void showRank(int a)
        {
            cout << "\nThis is a rank : " << a;
        }

        void showRank(student s)
        {
            cout << "\n\nNot a rank\n\n";
        }
        void showRank(student s, int a)
        {
            cout << "\nBoth\n";
            cout << "\nStudent : \n";
            s.showDetails();
            cout << "\n Rank :" << a;
        }


};

int main()
{ 
    Rank a;
    int r;
    cout << "Enter rank : ";
    cin >> r;
    student s;
    s.getInput();
    a.showRank(r);
    a.showRank(s);
    a.showRank(s,r);
}