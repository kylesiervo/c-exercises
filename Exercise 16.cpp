//EXERCISE NO.16

#include <iostream>
using namespace std;
int main()

{
    int number[5], high=0;
    
    cout<<"Input five numbers: ";
    for (int i=0; i<5; i++)
    {
    cin>>number[i];
    if (number[i] > high)
    high = number[i];
    }
    
    cout<<"The highest value among five inputs is: " <<high <<endl;
    cout<<"-------------------------------------------" <<endl;
    cout<<"The difference from the highest is: " <<endl;
    
    for (int i=0; i<5; i++) 
    cout<<"Score [" <<i <<"]: " <<high <<"-" <<number [i] <<" = " <<high-number [i] <<endl;
    
system ("pause");
return 0;
    
}
