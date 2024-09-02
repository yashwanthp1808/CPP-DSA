#include<iostream>
using namespace std;


void printsubArr(int *arr, int n) {
     int maxarray = INT16_MIN;
   
    for(int start = 0 ; start < n; start++) {
        for(int end = start; end < n; end++) {
              int currentsum=0;
            for(int i = start; i<=end; i++) {
                currentsum += arr[i];
            }
            cout<<currentsum<<",";
            maxarray = max(maxarray, currentsum);
        }
       
        cout<<endl;
    }
     cout<<"The maximum array is "<<maxarray<<endl;
}

void printsubArr2(int *arr, int n) {
     int maxarray = INT16_MIN;
   
    for(int start = 0 ; start < n; start++) {
         int currentsum=0;
        for(int end = start; end < n; end++) {
             
            currentsum += arr[end];
            maxarray = max(maxarray, currentsum);
        }
       
        cout<<endl;
    }
     cout<<"The maximum array is "<<maxarray<<endl;
}

int main() {

    int arr[5] = {1,2,3,4,5};
    int n= 5;

    printsubArr(arr,   n);
}