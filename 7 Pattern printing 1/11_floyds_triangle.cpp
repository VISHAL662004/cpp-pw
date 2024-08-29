// WAP to print
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    int x = 1; // here we initlize the variable outside the loop as if it was inside then it's value become 1 again and again
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;(j++ && x++)){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}