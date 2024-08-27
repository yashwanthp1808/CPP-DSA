//printing the smallest array number

#include<iostream>
using namespace std;

int main() {

    
    int arr[5]={2,5,3,7,9};
    int n = sizeof(arr)/sizeof(int);
    int i;
    int min=arr[0];
    for(i=0; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            
        }
            }
    cout<<"The max array is "<<min<<endl;
}