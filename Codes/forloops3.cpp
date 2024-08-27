//print 1 to n numbers part 2 , taking input from users.

#include<iostream>
using namespace std;

int main() {

    int i,m,n;
    cout<<"Enter the number from where you have to start"<<endl;
    cin>>m;
    cout<<"Enter the number till where you want to print"<<endl;
    cin>>n;
    cout<<"The numbers are"<<endl; 
    for(i=m; i<=n; i++) {
        cout<<i<<" ";
    }
    
}