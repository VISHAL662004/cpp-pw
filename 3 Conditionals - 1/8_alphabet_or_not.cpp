//WAP to check weather a character is alphabet or not.
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character : "; cin>>ch;
    int x = (int)ch;
    if((x>64 && x<91)||(x>96 && x<122)){
        cout<<"it is an alphabet.";
    }
    else{
        cout<<"it is not an alphabet.";
    }
}