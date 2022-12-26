#include<iostream>
using namespace std;
main()
{
int n;
int a;
int b;
int c;
int d;
int Q1;
int Q2;
int Q3;
int sum;
cout<<"Enter four digit number";
cin>>n;
a=n%10;
Q1=n/10;
b=Q1%10;
Q2=Q1/10;
c=Q2%10;
Q3=Q2/10;
d=Q3;
sum=a+b+c+d;
cout<<"Sum is :"<<sum;


}