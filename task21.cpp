#include<iostream>
using namespace std;
main()
{
float vegetablePrice;
float fruitPrice;
int totalkg1;
int totalkg2;
int totalprice1;
int totalprice2;
int totalEarning;
int InRupees;
cout<<"Enter vegetable price";
cin>>vegetablePrice;
cout<<"Enter fruit price";
cin>>fruitPrice;
cout<<"Total kilograms of vegetable";
cin>>totalkg1;
cout<<"Total kilograms of fruits ";
cin>>totalkg2;
totalprice1=vegetablePrice*totalkg1;
totalprice2=fruitPrice*totalkg2;
totalEarning=totalprice1+totalprice2;
InRupees=totalEarning*0.5155;
cout<<"In rupees :"<<InRupees;





}