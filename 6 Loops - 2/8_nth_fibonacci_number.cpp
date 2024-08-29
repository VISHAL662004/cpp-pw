//WAP to print the nth fibonacci number 
// 0 1 1 2 3 5 8 13 21 . . . . . . . . .
#include <iostream>
using namespace std;
int main(){
    int n; cout<<"enter a nunber : ";   cin>>n;
    if (n==1)   cout<<0;
    else if (n==2) cout<<1;
    else if (n==3)  cout<<1;
    else{
        int a = 1;
        int b = 1;
        int sum = 0;
        for(int i = 1;i<=n-3;i++){
            sum = a+b;
            a = b;
            b = sum;
        }
        cout<<b<<" ";
    }
}