//EXERCISE NO.14
#include <iostream>
using namespace std;
int main()

{
    int num[5], sum=0;
    cout<<"Enter five numbers of your choice: ";
    for (int i=0; i<5; i++)
    cin>>num[i];
    cout<<endl <<endl;
    
    for (int i=0; i<5; i++) 
    sum += num[i];
    
    cout<<"The sum of the numbers is: ";
    cout<<sum <<endl <<endl;

system ("pause");
return 0;
    
}
