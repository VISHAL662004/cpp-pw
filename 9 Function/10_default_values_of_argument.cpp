#include <iostream>
using namespace std;
void fun(int x, int y){
    cout<<x<<"\t"<<y<<endl;
}
void func(int x = 1, int y = 2){
    cout<<x<<"\t"<<y<<endl;
}
void funct(int x = 1, int y){ // agar default value de rahe ho to sabko deni hai
    cout<<x<<"\t"<<y<<endl;
}
int main(){
    int a = 4, b = 8;
    fun(a,b);
    fun(3,4);
    func();
    func(11,12);
   // funct(2,3);
}