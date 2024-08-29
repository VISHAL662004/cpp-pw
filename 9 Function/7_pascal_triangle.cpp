#include <iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i = 1;i<=x;i++){
        f = f*i;
    }
    return f;
}
int nCr(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main(){
    int n;  cout<<"enter the number of rows : ";    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = n;j>=i;j--){
            cout<<"  ";
        }
        for(int j = 0;j<=i;j++){
            if(nCr(i,j)<10)  cout<<"0"<<nCr(i,j)<<"  ";
            else    cout<<nCr(i,j)<<"  ";
        }
        cout<<endl;
    }
}