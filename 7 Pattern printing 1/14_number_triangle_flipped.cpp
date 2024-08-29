// WAP to print
//       1 
//     1 2
//   1 2 3
// 1 2 3 4
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;i+j<=n;j++){
            cout<<"  ";
        }
        for(int k = 1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}