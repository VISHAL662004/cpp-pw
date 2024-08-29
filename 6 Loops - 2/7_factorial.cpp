// WAP to print factorial of a number
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    int x = 1;
    for(int i = 1;i<=n;i++){
        x *= i;
    }
    cout<<x;
}