#include <iostream>
using namespace std;
void fact(int n){
    int x = 1;
    for(int i = 1;i<=n;i++){
        x *= i;
        cout<<i<<"! = "<<x<<endl;
    }
}
int main(){
    int n;  cout<<"emter n : "; cin>>n;
    fact(n);
    return 0;
}