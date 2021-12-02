//EXERCISE NO.15

#include <iostream>
using namespace std;
int main()

{
    float score[10], sum=0, average=0 ;
    cout<<"Enter the score of quiz 1 (ten times): ";
    for (int i=0; i<10; i++)
    cin>>score[i];
    cout<<endl <<endl;
    
    for (int i=0; i<10; i++) 
    sum += score[i];
    average = sum/10;
    cout<<"The average of the quizzes is: " <<average <<endl;
    cout <<endl <<endl;

system ("pause");
return 0;
    
}
