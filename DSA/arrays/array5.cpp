//priting the biggest array number
#include<iostream>
using namespace std;

int main() {

    
    int arr[5]={2,5,3,7,9};
    int n = sizeof(arr)/sizeof(int);
    int i;
    int max=arr[0];
    for(i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
         
        }
            }
    cout<<"The max array is "<<max<<endl;
}