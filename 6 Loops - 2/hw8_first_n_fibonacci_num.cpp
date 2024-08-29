// Print first ‘n’ fibonacci numbers
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    if(n==1)    cout<<0;
    else if(n==2)   cout<<"0 1";
    else if(n==3)   cout<<"0 1 1";
    else{
        int a=1,b=1,sum = 0;
        cout<<"0 1 1 ";
        for(int i = 1;i<=n-3;i++){
            sum = a+b;
            a = b;
            b = sum;
            cout<<sum<<" ";
        }
    }
}