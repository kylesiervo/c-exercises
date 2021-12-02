#include<iostream>
using namespace std;
int main()
{
    //EXERCISE NO.8
    
    cout<<"------ Exercise 8 ------"<<endl<<endl;
    
    string let ;
    cout<<"Enter an uppercase letter (or # to stop): ";
    cin>>let;

    while(let !="#")
    {
            
            if(let=="A"||let=="B"||let=="C"){
            cout<<"The letter you entered is:"<<let<<endl;
            cout<<"The equivalent numerical digit is: 20"<<endl;
            cout<<"Enter a uppercase letter again (or # to stop): ";
            cin>>let;
            }else if(let=="D"||let=="E"||let=="F"){
            cout<<"The letter you entered is: "<<let<<endl;
            cout<<"The equivalent numerical digit is: 30"<<endl;
            cout<<"Enter a uppercase letter again (or # to stop): ";
            cin>>let;
            }else if(let=="G"||let=="H"||let=="I"){
            cout<<"The letter you entered is: "<<let<<endl;
            cout<<"The equivalent numerical digit is: 40"<<endl;
            cout<<"Enter a uppercase letter again (or # to stop): ";
            cin>>let;
            }else if(let=="J"||let=="K"||let=="L"){
            cout<<"The letter you entered is: "<<let<<endl;
            cout<<"The equivalent numerical digit is: 500"<<endl;
            cout<<"Enter a uppercase letter again (or # to stop): ";
            cin>>let;
            }else if(let=="M"||let=="N"||let=="O"){
            cout<<"The letter you entered is: "<<let<<endl;
            cout<<"The equivalent numerical digit is: 600"<<endl;
            cout<<"Enter a uppercase letter again (or # to stop): ";
            cin>>let;
            }else if(let=="P"||let=="Q"||let=="R"||let=="S"){
            cout<<"The letter you entered is: "<<let<<endl;
            cout<<"The equivalent numerical digit is: 700"<<endl;
            cout<<"Enter a uppercase letter again (or # to stop): ";
            cin>>let;
            }else if(let=="T"||let=="U"||let=="V"){
            cout<<"The letter you entered is: "<<let<<endl;
            cout<<"The equivalent numerical digit is: 8000"<<endl;
            cout<<"Enter a uppercase letter again (or # to stop): ";
            cin>>let;
            }else if(let=="W"||let=="X"||let=="Y"||let=="Z"){
            cout<<"The letter you entered is: "<<let<<endl;
            cout<<"The equivalent numerical digit is: 9000"<<endl;
            cout<<"Enter a uppercase letter again (or # to stop): ";
            cin>>let;
            }
            else{
                  cout<<"invalid input"<<endl;
                  cout<<"Enter a uppercase letter again (or # to stop): ";
                  cin>>let;
                  }
    }
    cout<<endl<<endl;
    
    system("pause");
    return 0;
}
