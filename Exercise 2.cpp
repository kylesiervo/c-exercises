#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    //Program 1
    cout<<"----------------Program 1----------------" <<endl <<endl;
    
    string moviename;
    float atp, ctp, percentage, grossamount, amountdonated, netsale;
    int numberatp, numberctp, totaltix;
    
    cout<<"Enter the movie name: ";
    getline(cin,moviename);
    cout<<"Enter the price of an adult ticket: Php ";
    cin>>atp;
    cout<<"Enter the price of a child ticket: Php ";
    cin>>ctp;
    cout<<"Enter the number adult tickets sold: ";
    cin>>numberatp;
    cout<<"Enter the number child tickets sold: ";
    cin>>numberctp;
    cout<<"Enter the percentage of donation: ";
    cin>>percentage;
    cout<<endl <<endl;
    
    cout<<"_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" <<endl <<endl;
    
    cout<<setfill('.') <<left <<setw(40) <<"Movie Name: " <<moviename <<endl;

    cout<<setprecision(2) <<fixed <<showpoint;
    totaltix= numberatp + numberctp;
    cout<<setfill('.') <<left <<setw(40) <<"Number of tickets sold: " <<totaltix <<endl;
    
    grossamount= atp * numberatp + ctp * numberctp;
    cout<<setfill('.') <<left <<setw(40) <<"Gross Amount: Php " <<grossamount <<endl;
    
    cout<<setfill('.') <<left <<setw(40) <<"Percentage of Gross Amount Donated: " <<percentage;
    cout<<"%" <<endl;
    
    amountdonated= grossamount * percentage /100;
    cout<<setfill('.') <<left <<setw(40) <<"Amount Donated: Php " <<amountdonated <<endl;
    
    netsale= grossamount - amountdonated;
    cout<<setfill('.') <<left <<setw(40) <<"Net Sale: Php " <<netsale <<endl <<endl;
    
    system ("pause");
    system ("cls");
    
    
    //Program 2
    cout<<"----------------Program 1----------------" <<endl <<endl;
    int number;
    char answer;
    
do{

cout<< "Input a number: ";
cin>> number;

if (number <=50 || number >=100)
cout<<"Number is out of range!" <<endl <<endl;

else if (number >=51 || number<=99)
cout<<"Number is within range!" <<endl <<endl;

else 
cout<<"Invalid Input!!!" <<endl <<endl;


cout<< "Try again? <Y for yes, anykey for No>: ";
cin>>answer;
}while (answer == 'Y' || answer == 'y');

    
    
    system ("pause");
    return 0;
    
}
    
    
    
