#include <iostream>
using namespace std;
int main(){
    int *ptr = NULL; // NULL = '\0'
    cout<<ptr<<endl;
    cout<<&ptr;

    // double pointer
    int x;
    int *ptr1 = &x;
    int **ptr2 = &ptr;
}