#include <iostream>
using namespace std;
int main(){
    int a=3, b=4, c=5;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i = 1;i<=b;i++){
        for(int j = 1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i = 1;i<=c;i++){
        for(int j = 1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}