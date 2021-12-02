//TWO DIMENSIONAL ARRAY

#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
    int score[2][3]={{80,89,75},{100,65,88}};
    for (int r=0; r<2; r++)
    {
        for (int c=0; c<3; c++)
        cout<<score[r][c] <<" " ;
        cout<<endl;
        }
system ("pause");
return 0;
    
}
