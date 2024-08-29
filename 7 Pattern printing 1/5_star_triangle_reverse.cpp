// WAP to print
// * * * * 
// * * *
// * *
// *
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    // Method 1
    for(int i = n;i>0;i--){ // running this loop in reverse order
        for(int j = 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    //method 2
    for(int i = 1;i<=n;i++){
        for(int j = 1;i+j<=n+1;j++){  // sum of star in each row is i + j - 1 --> j <= n+1-i
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    // method 3
    for(int i = 1;i<=n;i++){
        for(int j = n;j>=i;j--){ //running the inner loop in reverse order
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}