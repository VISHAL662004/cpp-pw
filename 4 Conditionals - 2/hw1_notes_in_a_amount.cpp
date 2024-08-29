//Write a program to count the minimum number of notes in a given amount using the switch statement.
#include <iostream>
using namespace std;
int main(){
    int a;  cout<<"enter the amount : ";    cin>>a;
    // Method 1 -> using switch
        int n1 = 0,n2 = 0,n5 = 0,n10 = 0,n20 = 0,n50 = 0,n100 = 0,n200 = 0,n500 = 0,count=0;
        switch(1){
            case 1:
                n500=a/500;
                cout<<"number of note of 500 = "<<n500<<endl;
                a -= (500*n500);
                count += n500; 
            case 2:
                n200=a/200;
                cout<<"number of note of 200 = "<<n200<<endl;
                a -= (200*n200); 
                count += n200;
            case 3:
                n100=a/100;
                cout<<"number of note of 100 = "<<n100<<endl;
                a -= (100*n100);
                count += n100;
            case 4:
                n50=a/50;
                cout<<"number of note of 50 = "<<n50<<endl;
                a -= (50*n50); 
                count += n50;
            case 5:
                n20=a/20;
                cout<<"number of note of 20 = "<<n20<<endl;
                a -= (20*n20); 
                count += n20;
            case 6:
                n10=a/10;
                cout<<"number of note of 10 = "<<n10<<endl;
                a -= (10*n10); 
                count += n10;
            case 7:
                n5=a/5;
                cout<<"number of note of 5 = "<<n5<<endl;
                a -= (5*n5);
                count += n5; 
            case 8:
                n2=a/2;
                cout<<"number of note of 2 = "<<n2<<endl;
                a -= (2*n2); 
                count += n2;
            case 9:
                n1=a/1;
                cout<<"number of note of 1 = "<<n1<<endl;
                a -= (1*n1); 
                count += n1;
            cout<<"total number of notes = "<<count;
        }
    //  Method 2 -> using if-else and loop
        // int p = a;
        // int count = 0;
        // for(int i = 500;i>=1;i--){
        //     if(i==1||i==2||i==5||i==10||i==20||i==50||i==100||i==200||i==500){
        //         int b = a%i;
        //         int c = a;
        //         c = a-b;
        //         int d = c/i;
        //         cout<<"the number of notes of "<<i<<" in "<<p<<" is "<<d<<endl;
        //         a = a - c;
        //         count = count + d;
        //     }
        //     else    continue;
        // }
        // cout<<"tota number of notes = "<<count;
    // Method 3 -> using if-else
        // int n1 = 0,n2 = 0,n5 = 0,n10 = 0,n20 = 0,n50 = 0,n100 = 0,n200 = 0,n500 = 0,count = 0;
        // if(a>=500){
        //     n500=a/500;
        //     cout<<"number of note of 500 = "<<n500<<endl;
        //     a -= (500*n500);
        //     count += n500; 
        // }
        // if(a>=200){
        //     n200=a/200;
        //     cout<<"number of note of 200 = "<<n200<<endl;
        //     a -= (200*n200); 
        //     count += n200;
        // }
        // if(a>=100){
        //     n100=a/100;
        //     cout<<"number of note of 100 = "<<n100<<endl;
        //     a -= (100*n100);
        //     count += n100; 
        // }
        // if(a>=50){
        //     n50=a/50;
        //     cout<<"number of note of 50 = "<<n50<<endl;
        //     a -= (50*n50); 
        //     count += n50;
        // }
        // if(a>=20){
        //     n20=a/20;
        //     cout<<"number of note of 20 = "<<n20<<endl;
        //     a -= (20*n20); 
        //     count += n20;
        // }
        // if(a>=10){
        //     n10=a/10;
        //     cout<<"number of note of 10 = "<<n10<<endl;
        //     a -= (10*n10); 
        //     count += n10;
        // }
        // if(a>=5){
        //     n5=a/5;
        //     cout<<"number of note of 5 = "<<n5<<endl;
        //     a -= (5*n5);
        //     count += n5; 
        // }
        // if(a>=2){
        //     n2=a/2;
        //     cout<<"number of note of 2 = "<<n2<<endl;
        //     a -= (2*n2); 
        //     count += n2;
        // }
        // if(a>=1){
        //     n1=a/1;
        //     cout<<"number of note of 1 = "<<n1<<endl;
        //     a -= (1*n1); 
        //     count += n1;
        // }
        // cout<<"total number of notes = "<<count;
    // Method 4 -> best
        //  int n1 = 0,n2 = 0,n5 = 0,n10 = 0,n20 = 0,n50 = 0,n100 = 0,n200 = 0,n500 = 0,count = 0;
        
        //     n500=a/500;
        //     cout<<"number of note of 500 = "<<n500<<endl;
        //     a -= (500*n500);
        //     count += n500; 
        
        //     n200=a/200;
        //     cout<<"number of note of 200 = "<<n200<<endl;
        //     a -= (200*n200); 
        //     count += n200;
        
        //     n100=a/100;
        //     cout<<"number of note of 100 = "<<n100<<endl;
        //     a -= (100*n100);
        //     count += n100; 
        
        //     n50=a/50;
        //     cout<<"number of note of 50 = "<<n50<<endl;
        //     a -= (50*n50); 
        //     count += n50;
        
        //     n20=a/20;
        //     cout<<"number of note of 20 = "<<n20<<endl;
        //     a -= (20*n20); 
        //     count += n20;

        //     n10=a/10;
        //     cout<<"number of note of 10 = "<<n10<<endl;
        //     a -= (10*n10); 
        //     count += n10;
        
        //     n5=a/5;
        //     cout<<"number of note of 5 = "<<n5<<endl;
        //     a -= (5*n5);
        //     count += n5; 
        
        //     n2=a/2;
        //     cout<<"number of note of 2 = "<<n2<<endl;
        //     a -= (2*n2); 
        //     count += n2;
        
        //     n1=a/1;
        //     cout<<"number of note of 1 = "<<n1<<endl;
        //     a -= (1*n1); 
        //     count += n1;
        // cout<<"total number of notes = "<<count;
}