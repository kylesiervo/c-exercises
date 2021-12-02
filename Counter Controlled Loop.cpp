//EXERCISE NO. 9

#include<iostream>
using namespace std;
int main()
{
       
    float qsales, total=0, ctr=1, average;
    

    while (ctr <= 5)
    {
    
    cout<<"Enter the Region " <<ctr <<" Quarterly Sales: Php ";
    cin>>qsales;
    total +=qsales;
    ctr++;   
    }

    cout<<endl <<endl;    
    cout<<"The total region quarterly sales is: Php" <<total <<endl;
    average=total/ctr;
    cout<<"The average region sales is: Php" <<average <<endl <<endl <<endl;
  
    system("pause");
    return 0;
}
