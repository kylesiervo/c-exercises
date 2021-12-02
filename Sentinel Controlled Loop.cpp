#include <iostream>
using namespace std;
int main ()
{ 
   
    int password; 
    
    cout<<"Input Password: ";
    cin>>password; 
    
    while (password != 1234)
    {
    cout<<"Incorrect Password, Try Again!" <<endl <<endl;
          
    cout<<"Input your password again: ";
    cin>>password; 
    }
    
    cout<<"Successful Login! Apps now Loading....." <<endl ;

system("pause");
return 0;
}
