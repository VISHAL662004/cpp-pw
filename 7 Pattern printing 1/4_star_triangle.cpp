// WAP to print
// * 
// * *
// * * *
// * * * *
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){ // j<= i means loop will run i time depending upon i
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}