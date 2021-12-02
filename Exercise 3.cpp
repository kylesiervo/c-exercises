#include <iostream>
using namespace std;
int main ()
{
    cout<<"----------------Program 1----------------" <<endl <<endl;
    int number;
    char answer;
    
do{

cout<< "Input a number: ";
cin>> number;

if (number > 0)
cout<<"Positive Number!" <<endl <<endl;

else if (number <0)
cout<<"Negative Number!" <<endl <<endl;

else 
cout<<"Zero!!!" <<endl <<endl;


cout<< "Try again? <Y for yes, anykey for No>: ";
cin>>answer; 
cout<<endl;
}while (answer == 'Y' || answer == 'y');

    
    
    system ("pause");
    return 0;
    
}
    
    
