#include<iostream>
using namespace std;

void printsubArr(int *arr, int n) {
    for(int start = 0 ; start < n; start++) {
        for(int end = start; end < n; end++) {
              int currentsum=0;
            for(int i = start; i<=end; i++) {
                currentsum += arr[i];
            }
            cout<<currentsum<<",";
        }
        cout<<endl;
    }
}

int main() {

    int arr[6] = {2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);

    printsubArr(arr, n);
}