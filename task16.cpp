#include<iostream>
using namespace std;
main()
{
string MovieName;
int adultTicketPrice;
int childTicketPrice;
int NoOfAdultTicketsSold;
int totalPrice1;
int totalPrice2;
int totalPrice;
int NoOfChildTicketsSold;
float totalPercentageDonated;
cout<<"Enter Movie name";
cin>>MovieName;
cout<<"Enter adult ticket price";
cin>>adultTicketPrice;
cout<<"Enter child ticket price";
cin>>childTicketPrice;
cout<<"Enter number of Adult tickets sold :";
cin>>NoOfAdultTicketsSold;
cout<<"Enter number of child tickets sold :";
cin>>NoOfChildTicketsSold;
totalPrice1=adultTicketPrice*NoOfAdultTicketsSold;
totalPrice2=childTicketPrice*NoOfChildTicketsSold;
totalPrice=totalPrice1+totalPrice2;
totalPercentageDonated=totalPrice-(totalPrice/100)*10;
cout<<"Total price "<<totalPrice<<endl;
cout<<"After donation"<<totalPercentageDonated;

}