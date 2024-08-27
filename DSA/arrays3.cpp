#include<iostream>
using namespace std;

int main() {

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int len = sizeof(arr)/sizeof(int);

    for(int idx=0; idx<=len-1; idx++) {
        cout<<arr[idx]<<endl;
    }
}