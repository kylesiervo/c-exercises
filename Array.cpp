//ARRAY SAMPLE

#include <iostream>
using namespace std;
int main()

{
    float number [6];
    cout<<"Enter six numbers of your choice: ";
    for (int i=0; i<6; i++)
    cin>>number[i];
    cout<<endl <<endl;
    for (int i=0; i<6; i++)
    cout<<number[i] <<" ";
    cout<<endl <<endl;
    
    /*
    char name[50];
    cout<<"Enter your name: ";
    cin>>name;
    
    /*
    int score[5] = {90,50,100,70,60};
    for (int i=0; i<5; i++)
    cout<<score[i] <<" ";
    cout<<endl<<endl;
    
    
    int score[5] = {90,50,100,70,60};
    cout<<score[3] <<" " <<score[0] <<" " <<score[4];

    cout<<endl<<endl;
    */
    
system ("pause");
return 0;
    
}
