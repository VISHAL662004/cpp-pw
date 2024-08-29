#include <iostream>
using namespace std;
int sum(int *x, int *y){
    return *x + *y;
}
int main(){
    int x;  cout<<"enter x : "; cin>>x;
    int y;  cout<<"enter y : "; cin>>y;
    int *p1 = &x, *p2 = &y;
    //int *p2 = &y;
    cout<<sum(p1,p2);
}