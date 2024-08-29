//WAP to check wheather a character is a vowel or consonet.
#include <iostream>
using namespace std;
int main(){
    char ch; cout<<"enter a character : "; cin>>ch;
    int x = (int)ch;
    if((x>96 && x<123)|| (x>64 && x<91)){
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            cout<<ch<<" is a vowel.";
        else
            cout<<ch<<" is a consonent.";
    }
    else{
        cout<<ch<<" is not a alphabet";
    }
}