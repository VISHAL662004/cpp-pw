#include<iostream>
using namespace std;
void fun(int x){
    cout<<&x;
}
int main(){
    int x;
    cout<<&x<<endl;
    fun(x);
    return 0;
} 