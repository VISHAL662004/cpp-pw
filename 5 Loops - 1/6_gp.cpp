// WAP to print GP 1,2,4,8,16,32.... upto n terms
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    int x = 1;
    for(int i = 1;i<=n;i++){
        cout<<x<<" ";
        x *= 2;
    }
}