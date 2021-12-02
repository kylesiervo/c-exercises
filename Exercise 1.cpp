#include <iostream>
using namespace std;
int main ()
{
    //Program 1
    cout<<"-------Program 1------" <<endl <<endl;
    
    float b,h,a;
    cout<<"Input the base of triangle: ";
    cin>>b;
    cout<<"Input the height of triangle: ";
    cin>>h;
    cout<<endl;
    a=0.5*(b*h);
    cout<<"The area of a triangle is: " <<a <<endl <<endl <<endl;
 
    
    system ("pause");
    system ("cls");


    //Program 2
    cout<<"-------Program 2------" <<endl <<endl;
    
    string number, name;
    float salary, bonus;
    cin.ignore();
    
    cout<<"Input the Employee Number: ";
    getline(cin,number);
    cout<<"Input the Employee Name: ";
    getline(cin,name);
    cout<<endl;
    cout<<"Input the Salary: Php ";
    cin>>salary;
    cout<<endl <<endl;
    
        if (salary <= 2000)
        {
         bonus= salary*.50;
         cout<<"The bonus is: Php " <<bonus <<endl ;
         } 
        else if (salary > 2000)
        {
         bonus= 1500;   
         cout<<"The bonus is: Php " <<bonus <<endl ;
         }
        else
        { 
        cout<<"Invalid Input" <<endl;
        }
        
    system ("pause");
    system ("cls");
    
    cout<<"\t\t --SUMMARY--\t\t" <<endl <<endl;
    cout<<"Employee Number:" <<number <<endl;
    cout<<"Employee Name:" <<name <<endl;
    cout<<"Salary:" <<salary <<endl;
    cout<<"Bonus: Php " <<bonus <<endl <<endl;
    
    system ("pause");
    system ("cls");
    
    
    //Program 3
    cout<<"-------Program 3------" <<endl <<endl;
    
    int minute, ehours, eminutes;
    cout<<"Input the number of minute/s: ";
    cin>>minute;
    cout<<endl;
    ehours=  minute/60;
    eminutes= minute%60;
    
    cout<<"The equivalent number of hour/s:" <<ehours <<endl;

    cout<<"The equivalent number of minute/s:" <<eminutes <<endl <<endl;
 
    
    system ("pause");
    return 0;
    
}
    

    

