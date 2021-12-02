//EXERCISE NO. 9

#include<iostream>
using namespace std;
int main()
{
       
    float sales, total=0, ctr=0, average;
    
    
    cout<<"Enter the first sales amount (or negative number to stop): Php ";
    cin>>sales;
    

    while (sales >= 0)
    {
    total += sales;
    ctr++;
    
    cout<<"Enter the next sales amount (or negative number to stop): Php ";
    cin>>sales;
    }
    
    if (ctr > 0)
    {
    cout<<endl <<endl;    
    cout<<"The total sales amount is: Php" <<total <<endl;
    average=total/ctr;
    cout<<"The average total sales is: Php" <<average <<endl;
    }
    
    else
    {
    cout<<"No Sales Entered!" <<endl <<endl;
    }
    
    system("pause");
    return 0;
}
