#include <iostream>
using namespace std;
void swap1(int a, int b){
    int c;
    a = c;
    a = b;
    b = c;
}
void swap2(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
}
int main(){
    int a = 1, b = 2;
    swap1(a,b);
    cout<<a<<" "<<b;
    swap2(a,b);
    cout<<a<<" "<<b;
}