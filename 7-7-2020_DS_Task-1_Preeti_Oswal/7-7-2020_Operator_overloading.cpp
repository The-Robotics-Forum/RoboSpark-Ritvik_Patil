#include<bits/stdc++.h>
using namespace std;
class String
{   public:
    string arr;
    String()
    {
        arr = " ";
    }
    String(string arr)
    {
        this -> arr = arr;
    }
    void Display();
    void operator+ (String s);
    void operator* (int n);
    friend void operator*(int n,String &s);
    friend istream& operator >>( istream &cin, String &s);
    friend ostream& operator << ( ostream &cout, String &s);
};
void String::Display()
{
    cout << "String :" << endl;
    cout << arr << endl;
    cout << endl << endl;
}
void String::operator+(String s)
{
    cout << "Concatetion Successful" << endl;
     arr = arr + s.arr;
    cout << endl << endl;
}
void String::operator*(int n)
{   string temp = arr;
    cout << "Multiplication Successful"<< endl;
    for(int i = 0; i < (n-1); i++ )
    {
        arr +=temp;
    }cout << endl<< endl;
}
void operator*(int n,String &s)
{
    string temp = s.arr;
    cout << "Multiplication Successful"<< endl;
    for(int i = 0; i < (n-1); i++ )
    {
        s.arr +=temp;
        //cout << s.arr << endl;
    }cout<<endl<< endl;
}
istream& operator >> (istream &cin ,String &s)
{
    cout << ">> Operator Overloaded"<< endl;
    cout << "Enter the string : ";
    cin >> s.arr;
    cout << endl << endl;
}

ostream& operator <<( ostream &cout, String &s)
{
    cout << "<< Operator Overloaded"<< endl;

    cout << "String :";
    cout<< s.arr;
    cout << endl << endl;


}



int main()
{
    String s1("Preeti"),s2(" Oswal"),s3;

    s1*3;
    s1.Display();

    5*s2;
    s2.Display();

    s1+s2;
    s1.Display();

    cin >> s3;
    cout << s3;


}
