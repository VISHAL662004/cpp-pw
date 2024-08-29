    // WAP to print
// * * * * * 
// * * * * *
// * * * * *
#include <iostream>
using namespace std;
int main(){
    int r;  cout<<"enter number of rows : ";    cin>>r;
    int c;  cout<<"enter number of rows : ";    cin>>c;
    for(int i = 1;i<=r;i++){ // this loop is responsible for number of rows
        for(int j = 1;j<=c;j++){ // this loop is responsible for printing number of columns
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}