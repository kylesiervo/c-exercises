#include<iostream>
#include<iomanip>
#include<cctype>
#include<cmath>
using namespace std;
int main ()
{
    
    cout<<"---------------------- Exercise 6 -----------------------" <<endl <<endl;



cout<<showpoint<<setprecision(2)<<fixed;

double a, b, c, Quad;

cout<<"Input the value of A: " ;
cin>>a;
cout<<"Input the value of B: " ;
cin>>b;
cout<<"Input the value of C: " ;
cin>>c;
cout<<endl <<endl;

Quad= (-b+sqrt(pow(b,2) - 4*a*c)) / (2*(a));

cout<<"The Quad is:" <<Quad <<endl <<endl <<endl;

system("pause");
return 0;
}
