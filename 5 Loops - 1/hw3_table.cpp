//WAP to print the table of any number
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    int x = 1;
    for(int i = n;i<=(n*10);i=i+n){
        cout<<n<<" * "<<x<<" = "<<i<<endl;
        x++;
    }
}