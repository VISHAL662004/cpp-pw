//WAP to print the ap 1,3,5,7,9.... upto n terms
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter a number : ";  cin>>n;
    //method 1 -> use ap Nth term
    for(int i = 1;i<=2*n-1;i=i+2){
        cout<<i<<" ";
    }
    cout<<endl;
    //method 2 -> do without maths
    int x = 1;
    for(int i = 1;i<=n;i++){
        cout<<x<<" ";
        x += 2;
    }
}