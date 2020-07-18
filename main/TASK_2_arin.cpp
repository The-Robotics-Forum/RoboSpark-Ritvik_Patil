#include<bits/stdc++.h>
using namespace std;
 class students{
     public:
     string name;
     int roll;
     int *marks=new int[5];

     int total=0;
     double cgpa;
 students(){
     name="default";
     roll=0;
     int marks[5]={0,0,0,0,0};
     total=0;
     cgpa=0;}
 void stud_inp(){
     cout<<" Enter Student Details: "<<endl;
     cout<<" Name of the Student : ";
     cin>>name;
     cout<<"Roll number of the Student : ";
     cin>>roll;
     for(int i=0;i<5;i++){
         cin>>marks[i];
     }}
 int tot(int *arr){
     for(int i=0;i<5;i++){
         total=total+arr[i];
     }
     cout<< " Total Marks : ";
     return total;
 }
 double cgp(int*arr){
     double tot=0;
     for(int i=0;i<5;i++){
         tot=tot+arr[i];}
         cgpa=tot/50;
     cout<< " CGPA is : ";
     return cgpa;
 }
 void display(){
     cout<< "Name of the student : " << name <<endl;
     cout<<"Roll number of the student : " << roll<<endl;
     cout<<tot(marks)<<endl;
     cout<< cgp(marks);
 }
 void showRank(int c){
     cout<<"rank is: "<<c;}
 void showRank(string name){
     display();
     cout<<"NO rank";
 }
 void showRank(string name,int rank){
     display();
     cout<<"\n"<<rank;
 }
 };
 int main(){
     students s;
     s.stud_inp();
     s.showRank("Arin ",3);

 }
