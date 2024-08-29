// WAP to print
// 1 
// 1 3
// 1 3 5
// 1 3 5 7
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    //method 1
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=2*i-1;j += 2){ // use maths
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //method 2
    
    for(int i = 1;i<=n;i++){
        int x = 1; // introducing extra variable inside the loop to make it 1 everytime the loop begains
        for(int j = 1;j<=i;j++){
            cout<<x<<" ";
            x += 2;
        }
        cout<<endl;
    }
}
