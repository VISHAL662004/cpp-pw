//WAP to find the difference between ASCII of two characters ,take them as input 
#include <iostream>
using namespace std;
int main(){
    char ch1;    cout<<"enter 1st character : ";     cin>>ch1;
    char ch2;    cout<<"enter 2nd character : ";     cin>>ch2;
    int x= int(ch1)-int(ch2);
    cout<<"the difference in there ascii value is : "<<x;
    cout<<endl<<"and this matches with : "<<char(x);
}
