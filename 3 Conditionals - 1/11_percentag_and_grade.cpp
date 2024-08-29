//WAP to find percentage of student and grade accordengly
#include <iostream>
using namespace std;
int main(){
    float m,p,c,e,ex,per;
    cout<<"Enter maths marks : "; cin>>m;
    cout<<"Enter physics marks : "; cin>>p;
    cout<<"Enter chemstry marks : "; cin>>c;
    cout<<"Enter english marks : "; cin>>e;
    cout<<"Enter extra marks : "; cin>>ex;
    per = (m+p+c+e+ex)/5;
    cout<<"The percentage marks is : "<<per<<endl;
    if(per>90) cout<<"excelent";
    else if(per>80) cout<<"Very good";
    else if(per>70) cout<<"good";
    else if(per>60) cout<<"can do better";
    else if(per>50) cout<<"average";
    else if(per>40) cout<<"below average";
    cout<<"Fail";
}