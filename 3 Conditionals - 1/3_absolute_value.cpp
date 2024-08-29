// WAP to print absolute value of a function
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    //method 1
    if(n>=0){
        cout<<"the absolute value is "<<n;
    }
    else{
        cout<<"the absolute value is "<<-n;
    }
    cout<<endl;
    //method 2
    if(n<0){
        n = -n;
    }
    cout<<"The absolute valkue is : "<<n;
}