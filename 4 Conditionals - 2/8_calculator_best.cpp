// calculator using functions
#include <iostream>
using namespace std;
float add(float a,float b){
    float x = a+b;
    return x;
}
float sub(float a,float b){
    float x = a-b;
    return x;
}
float mul(float a,float b){
    float x = a*b;
    return x;
}
float divide(float a,float b){
    float x = a/b;
    return x;
}
void line(){
    for(int i = 1;i<=100;i++){cout<<"-";}
    cout<<endl;
}
int main(){
    while (true){
        char ch;    cout<<"do you want to use calculator Y or N : ";  cin>>ch;
        if(ch == 'N' || ch == 'n'){
            cout<<"thank you."<<endl;
            line();
            break;
        }
        else if(ch == 'Y' || ch == 'y'){
            float a,b;    char op;
            cout<<"enter the operation : ";
            cin>>a>>op>>b;
            if(op=='+') cout<<add(a,b)<<endl;
            if(op=='-') cout<<sub(a,b)<<endl;
            if(op=='*') cout<<mul(a,b)<<endl;
            if(op=='/') cout<<divide(a,b)<<endl;
            line();
        }
    }
}