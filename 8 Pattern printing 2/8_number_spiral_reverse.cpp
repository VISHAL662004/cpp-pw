// WAP to print
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    int x = (2*n)-1;
    for(int i = 1;i<=x;i++){
        for(int j = 1;j<=x;j++){
            int a = i;
            int b = j;
            if(a>n) a = 2*n - i;
            if(b>n) b = 2*n - j;
            int x = min(a,b);
            cout<<n - x + 1<<" ";
        }
        cout<<endl;
    }
    return 0;
}