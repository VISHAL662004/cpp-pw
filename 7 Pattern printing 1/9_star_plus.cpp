// WAP to print
//     *     
//     *
// * * * * *
//     *
//     *
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a odd number : ";  cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(j==(n+1)/2 || i==(n+1)/2)    cout<<"* ";// condition to print star
            else    cout<<"  "; // printing space in rest of the blanks
        }
        cout<<endl;
    }
    return 0;
}