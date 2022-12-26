#include<iostream>
using namespace std;
main()
{
int initial_velocity;
int final_velocity;
int acceleration;
int time;
cout<<"enter initial velocity";
cin>>initial_velocity;
cout<<"enter acceleration";
cin>>acceleration;
cout<<"enter time";
cin>>time;
final_velocity=(acceleration*time)+initial_velocity;
cout<<"Final velocity ="<<final_velocity;


}
