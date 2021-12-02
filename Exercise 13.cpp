//EXERCISE NO.13

#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
    string password="";
    char x;
    
    cout<<"Enter the password: ";
    x= _getch();
    while(x !=13)
    {
            password.push_back(x);
            cout<< 'x';
            x= _getch();
            }
            if(password == "sanbeda")
            {
            cout<<"\nLogin successful. . . "<<endl;
            }
            else
            {
            cout<<"\nAccess Denied. . . "<<endl;
            }
    
    system ("pause");
    return 0;

}
