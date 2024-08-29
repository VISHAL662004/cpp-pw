// WAP to print
//       * 
//     * *
//   * * *
// * * * *
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    // Method 1
    for(int i = 1;i<=n;i++){
        for(int j = 1;i+j<=n;j++){
            cout<<"  ";
        }
        for(int k = 1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    // Method 2
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i+j>=n+1)    cout<<"* ";
            else    cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}