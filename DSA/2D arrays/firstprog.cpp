#include<iostream>
using namespace std;

int main() {

    int arr[3][4];
    int n=3, m=4;
    
    cout<<"Enter the array of n x m"<<endl;
    for(int i=0; i<n; i++) {
         for(int j=0; j<m; j++) {
            cin>>arr[i][j];
         }
    }
    cout<<"The arrays are "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
}