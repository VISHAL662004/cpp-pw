// display the ap 4,7,10,... upto n term
#include <iostream>
using namespace std;
int main(){
    int k = 4;
    int n;  cout<<"enter n : "; cin>>n;
    for(int i = 1;i<=n;i++){
        cout<<k<<" ";
        k+=3;
    }
}