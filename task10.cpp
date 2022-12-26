#include<iostream>
using namespace std;
main()
{
int days;
int monthlySalary;
float dollars;
float anualSalary;
float bonusSalary;
float Aftertaxes;
float exchangeRate;
float output;

cout<<"Enter days";
cin>>days;
cout<<"Enter days";
cin>>days;
cout<<"Enter dollars ";
cin<<dollars;
cout<<"Enter exchangeRate";
cin>>exchangeRate;
monthlySalary=days * dollars;
anualSalary=monthlySalary * 12;
bonusSalary=2.5 * anualSalary;
AfterTaxes=bonusSalary-(bonusSalary*25/100);
exchangeRate=(AfterTaxes * exchangeRate)/365;
cout<<"The output is "<<output;


 



}