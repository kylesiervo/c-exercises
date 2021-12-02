#include <iostream>  
using namespace std;
int main ()
{
    int ans,a=7, b=10;
    string str1="Low",str2="High",str3="Medium", a="Red", b="Blue", c="Black";

    cout<< "-----Exercise No.4-----" <<endl;
    cout<< "1. " <<(str1 <= str2) <<endl; 
    cout<< "2. " <<(str1 != "low") <<endl; 
    cout<< "3. " <<(str2 <= str1) <<endl; 
    cout<< "4. " <<(str3 > "Medium") <<endl; 
    cout<< "5. " <<(str3 <= "Light") <<endl; 
    
    cout<< "6. " <<(a <= b) <<endl; 
    cout<< "7. " <<(a != "red") <<endl; 
    cout<< "8. " <<(c <= a) <<endl; 
    cout<< "9. " <<(b > c) <<endl; 
    cout<< "10. " <<(a > "Purple") <<endl; 
    cout<< "11. " <<((c <= "White") && ("black" == c)) <<endl; 
    
    cout<<"((a+b)%a);
    ans=((a+b)%a);
    cin<<ans;
    
    system ("pause");
    return 0;
    
}
    
