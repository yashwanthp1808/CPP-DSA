#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;

    int arr[n];
    // int n = sizeof(arr)/sizeof(int);

    cout<<"Enter the array elements"<<endl;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"The array elements are "<<endl;
    for(int i=0; i<=n-1; i++) {
        cout<<arr[i]<<",";
         
    }
    cout<<endl;
}