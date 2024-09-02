//kadane's algorithm of finding the subarrays

#include<iostream>
using namespace std;


void printsubArr(int *arr, int n) {
     int maxarray = INT16_MIN;

    int currentsum = 0;   
    for(int i = 0; i<n; i++){
        currentsum += arr[i];
        maxarray = max(maxarray, currentsum);
        cout<<currentsum<<endl;
        if(currentsum < 0){
            currentsum=0;
             
        }  
    }
     cout<<"The maximum array is "<<maxarray<<endl;
}


int main() {

    int arr[5] = {1,2,3,4,5};
    int n= 5;

    printsubArr(arr,   n);
}