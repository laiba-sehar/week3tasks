#include<iostream>
using namespace std;
main()
{
int bagSize;
int costOfBag;
int area;
float CostOfFertilizer;
float AreaPerSquareFoot;
cout<<"Enter size of bag in pounds";
cin>>bagSize;
cout<<"Enter cost of bag";
cin>>costOfBag;
cout<<"Enter area covered by bag in square feet";
cin>>area;
CostOfFertilizer=costOfBag/bagSize;
cout<<"The cost of fertilizer per pound"<<CostOfFertilizer<<endl;
AreaPerSquareFoot=bagSize*area;
cout<<" cost of fertilizing area per square foot"<<AreaPerSquareFoot;





}