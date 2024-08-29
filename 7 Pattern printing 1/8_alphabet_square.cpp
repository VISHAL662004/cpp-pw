// WAP to print
// A B C D 
// A B C D
// A B C D
// A B C D
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    // method 1
    for(int i = 1;i<=n;i++){
        for(int j = 65;j<=64+n;j++){   // n start from 1 so j<= 64 + n
            char ch = (char)j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // method 2
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<(char)(j+64)<<" "; // this will add 64 to j every time 
        }
        cout<<endl;
    }
    return 0;
}