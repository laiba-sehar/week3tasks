#include<iostream>
using namespace std;
int main()
{
string name;
float subject1Marks=0;
float subject2Marks=0;
float subject3Marks=0;
float subject4Marks=0;
float subject5Marks=0;
float percentage;
cout<<"Enter your name";
cin>>name;
cout<<"Enter 1 subject marks :";
cin>>subject1Marks;
cout<<"Enter 2 subject marks :";
cin>>subject2Marks;
cout<<"Enter 3 subject marks :";
cin>>subject3Marks;
cout<<"Enter 4 subject marks :";
cin>>subject4Marks;
cout<<"Enter 5 subject marks :";
cin>>subject5Marks;
percentage=(((subject1Marks+subject2Marks+subject3Marks+subject4Marks+subject5Marks) * 100))/500;
cout<<" Total percentage :"<<percentage;
return 0;
}