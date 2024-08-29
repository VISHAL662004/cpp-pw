//WAP to print all uppercase alphabet with their ascii values
#include <iostream>
using namespace std;
int main(){
    char ch = 'A';
    int x = (int)ch;
    for(x = 65;x<=90;x++){
        cout<<ch<<" -> "<<x<<endl;
        ch++;
    }
}