#include <iostream>
using namespace std;
int fac(int x){
    int f = 1;
    for(int i = 1;i<=x;i++){
        f = f*i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"enter n : "; cin>>n;
    cout<<"enter r : "; cin>>r;
    int p = fac(n)/fac(n-r);
    int c = fac(n)/(fac(n-r) * fac(r));
    cout<<"nPr = "<<p<<endl;
    cout<<"nCr = "<<c;
    return 0;
}