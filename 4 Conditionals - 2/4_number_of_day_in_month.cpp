//WAP to input month number and print number of days in it using switch statment
#include <iostream>
using namespace std;
int main(){
    int n;  cout<<"enter the month number : ";  cin>>n;
    switch(n==1||n==3||n==5||n==7||n==8||n==10||n==12){
        case 1:
        cout<<"31";
    }
    switch(n==2){
        case 1:
        cout<<"if leap year then 29"<<endl<<"if no a leap year then 28";
    }
    switch(n==4||n==6||n==9||n==11){
        case 1:
        cout<<"30";
    }
}