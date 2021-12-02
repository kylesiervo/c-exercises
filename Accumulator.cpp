//EXAMPLE ACCUMULATOR

#include<iostream>
using namespace std;
int main()
{
       
    float purchase, total=0, ctr=0, average;
    
    
    cout<<"Enter the amount of the first purchase: Php ";
    cin>>purchase;
     
    while (purchase != 0)
    {
    total += purchase;
    ctr++;
    
    cout<<"Enter the amount of the next purchase (or 0 to stop): Php ";
    cin>>purchase;
    }
    cout<<endl <<endl;    
    cout<<"The total purchase is: Php" <<total <<endl;
    average=total/ctr;
    cout<<"The average purchase is: Php" <<average <<endl;

    system("pause");
    return 0;
}
