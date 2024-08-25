#include<iostream>
using namespace std;

int main(){
 cout<<"enter 1 for addition, 2 for subtraction";
    int n;
    cin>>n;

   
    if(n==1) {
        cout<<"you selected addition"<<endl;
        cout<<"enter first number"<<endl;
        int a;
        cin>>a;
        cout<<"enter second number"<<endl;
        int b;
        cin>>b;
        cout<<"the sum is "<<a+b<<endl;
    }else if(n==2) {
        cout<<"you selected subtraction"<<endl;
       cout<<"enter first number"<<endl;
        int a;
        cin>>a;
        cout<<"enter second number"<<endl;
        int b;
        cin>>b;
        cout<<"the diff is "<<a-b<<endl;  

    }
}