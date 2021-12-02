#include <iostream>  
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
    //Exercise 5
    cout<<"---------------------- Exercise 5 -----------------------" <<endl <<endl;
    
    cout<<showpoint<<setprecision(2)<<fixed;
    double area, pi=3.1416, rcircle, volume, rvolume;
    
    cout<<"-------------SOLVE FOR THE AREA OF A CIRCLE-------------" <<endl <<endl;
    cout<<"Input the radius of the circle: ";
    cin>>rcircle;
    cout<<endl <<endl;
    
    area= pi*pow(rcircle,2);
    cout<<"The area of the circle is: " <<area <<endl <<endl <<endl;

    system ("pause");
    system ("cls");
    
    cout<<"-------------SOLVE FOR THE VOLUME OF A SPHERE-------------" <<endl <<endl;
    cout<<"Input the radius of the sphere: ";
    cin>>rvolume;
    cout<<endl <<endl;
    
    volume= 4/3*pi*pow(rvolume,2);
    cout<<"The volume of the sphere is: " <<volume <<endl <<endl <<endl;
    
    
    
    system ("pause");
    return 0;
    
}
    
