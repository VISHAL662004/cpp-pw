// WAP to print
// *       * 
//   *   *
//     *
//   *   *
// *       *
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a odd number : ";  cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==j || (i+j)==(n+1))    cout<<"* ";// condition to print star
            else cout<<"  "; // else printing spaces
        }
        cout<<endl;
    }
    return 0;
}