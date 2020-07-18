#include<iostream>
#include<string.h>
using namespace std;

class String
{
    private:
        char str[50];
    public:

        String(){
            strcpy(str," ");
        }

        String (char s[]){
            strcpy(str, s);
        }
    void gets_string();
        String operator+ (String object ){
            String temp;
            if(strlen(temp.str) + strlen(object.str)<50){
                strcpy(temp.str, str);
                strcat(temp.str, object.str);
            }
            else{
                cout<<"String over Flow";
                exit(1);
            }
            return temp;
        }

        void display(){

            cout<<str<<endl;
        }
};
int main(){

String s1 = "Arin ";
String s2 = "Mishra ";
s1.display();
s2.display();

String s3;
s3 = s1+s2;
s3.display();
}
