//EXERCISE NO. 12

#include <iostream>
using namespace std;
int main()

{
    char answer;
    
    cout<<"--------Exercise No.12--------" <<endl <<endl;
    
    do{
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    
    for (int row=1; row<=x; row++)
    {
        cout<<endl <<endl;
        for (int x=1; x<=10; x++){
        cout<<"   " <<x <<" ";
        
        cout<<endl;
    }
    }
    cout<<"Try again? Y/N:";
    cin>>answer;
    }while (answer=='Y' || answer=='y');
    
    system ("pause");
    return 0;
    
    }
