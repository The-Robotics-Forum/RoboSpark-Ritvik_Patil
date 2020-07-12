#include <bits/stdc++.h>
#include <string.h>
using namespace std;


class My_String
{
    char *x;
    int y;
    public:
    My_String()
    {
        y = 15;
        x = new char[15];
    }
    My_String(char *s){
        y = strlen(s);
        x = new char[y];

        for (int i = 0; i < y; i++)
            x[i] = s[i];
    }
    My_String operator+(My_String z);
    void operator*(char s);
    void display();
    void operator=(char *s);
};
My_String My_String::operator+(My_String z)
{
    int c, d;
   
    c = 0;
 
    while (x[c] != '\0') {
    c++;      
    }
    
    d = 0;
    
    while (z.x[d] != '\0') {
        x[c] = z.x[d];
        d++;
        c++;    
    }
    
    x[c] = '\0';
    return x;
    
}
void My_String::display()
{
    cout << "String: " << x << endl;
}

void My_String::operator=(char *s)
{
    y = strlen(s);
    x = new char[y];

    for (int i = 0; i < y; i++)
        x[i] = s[i];
}


int main()
{
    /*char *a,*b;
    cout << "enter 1st" << endl;
    cin >> a;
    cout << "\nenter 2nd" << endl;
    cin >> b;
    My_String x(a),z(b);
    */
   My_String x = "Hello";
   My_String z = "World";
   (x+z).display();
}
