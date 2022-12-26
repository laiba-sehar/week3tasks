#include<iostream>
using namespace std;
main()
{
string name;
float matric_marks;
float matric_percentage;
float intermediate_marks;
float intermediate_percentage;
float ecat_marks;
float ecat_percentage;
float var1;
float var2;
float var3;
float aggregate;
cout<<"Enter your name";
cin>>name;
cout<<"Enter your matric marks";
cin>>matric_marks;
cout<<"Enter youe intermediate marks";
cin>>intermediate_marks;
cout<<"Enter your Ecat marks";
cin>>ecat_marks;
matric_percentage=matric_marks/1100 *100;
intermediate_percentage=intermediate_marks/550 *100;
ecat_percentage= ecat_marks/400 *100;
var1=matric_percentage*0.1;
var2=intermediate_percentage*0.4;
var3=ecat_percentage*0.5;
aggregate=var1+var2+var3;
cout<<"Your aggregate is "<<aggregate;



}