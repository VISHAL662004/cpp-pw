//WAP to print the table of any number
#include <iostream>
using namespace std;
int main(){
    long long n;  cout<<"enter a number : ";  cin>>n;
    long long x = 1;
    cout<<sizeof(x)<<endl;
    for(long long i = n;i<=(n*10);i=i+n){
        cout<<n<<" * "<<x<<" = "<<i<<endl;
        x++;
    }
}