#include<iostream>
#include<iomanip>
#include<cctype>
#include<cmath>
using namespace std;
int main ()
{
    
double pi= 3.1416, r, a, b, h, Vol, Hypo;

cout<<"---------------------- Exercise 7 -----------------------" <<endl <<endl;
cout<<"----------- Volume of a Right Circular Cone ------------" <<endl <<endl <<endl;
cout<<"Input the Radius: " ;
cin>>r;
cout<<"Input the Height: " ;
cin>>h;

cout<<endl;

cout<<showpoint<<setprecision(2)<<fixed;

cout<<"------------ Hypotenuse of a Right Triangle ------------" <<endl <<endl <<endl;
cout<<"Input the A: " ;
cin>>a;
cout<<"Input the B: " ;
cin>>b;

Vol= 1.0/3.0*pi*pow(r,2)*h;
Hypo= sqrt(pow(a,2.0)+pow(b,2.0));


cout<<endl; 

cout<<"The Volume is: " <<Vol <<endl;
cout<<"The Hypotenuse is:" <<Hypo <<endl;
    
    
    
    
system("pause");
return 0;
}
