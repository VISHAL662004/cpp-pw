// WAP to 
// 1 2 3 4 5 6 7 
// 1 2 3   5 6 7
// 1 2       6 7
// 1           7
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    for(int m = 1;m<=2*n-1;m++)     cout<<m<<" ";
    cout<<endl;
    for(int i = 1;i<=n-1;i++){
        int a =1;
        for(int j = 1;i+j<=n;j++){
            cout<<a<<" ";
            a++;
        }
        for(int k = 1;k<=2*i-1;k++){
            cout<<"  ";
            a++;
        }
        for(int l = 1;i+l<=n;l++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}