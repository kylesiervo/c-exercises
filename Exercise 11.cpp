//EXERCISE NO. 9

#include <iostream>
using namespace std;
int main()

{;
    int x;
    char answer;
    
    cout<<"--------Exercise No.11--------" <<endl <<endl;
    

    do{
    cout<<"Input an integer: ";
    cin>>x;
    for (int row=1; row<=x ; row++)
    { 
        for (int column=1; column<=row; column++)
    {
        cout<<"*";
    }
        cout<< endl;
    }
    cout<<endl;
    cout<<"Input again? [Y for yes, anykey for No]" <<endl;
    cin>>answer;
    cout<<endl;
    } while (answer=='y' || answer=='Y');
    
    system ("pause");
    return 0;

}
