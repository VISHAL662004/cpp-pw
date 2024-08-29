//WAP to creat a calculator using switch statement
#include <iostream>
using namespace std;
int main(){
    float n1,n2;
    char op;
    cout<<"enter the problem : ";
    cin>>n1>>op>>n2;
    switch(op){
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
    }
    return 0;
}