//to print the sum of n numbers using for loops

#include<iostream>
using namespace std;

int main() {

    int m;
    cout<<"Enter the number from where you want to start from "<<endl;
    cin>>m;
    int n;
    cout<<"Enter the number from where you want to end "<<endl;
    cin>>n;
    

    int i;
    int sum=0;
    cout<<"The n numbers are "<<endl; 
    for(i=m; i<=n; i++) {
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<endl;
    cout<<"The sum of these "<<n<<" numbers is "<<sum<<endl;
}