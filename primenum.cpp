//prime number using for loops

#include<iostream>
using namespace std;

int main() {

    cout<<"Enter the number to check whether it is a prime number or not"<<endl;
    int n;
    cin>>n;

    bool isPrime = true;

    for(int i=2; i<=n-1; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }

    }
    if(isPrime==true) {
        cout<<"The number is prime"<<endl;

    } else {
        cout<<"The number is not prime"<<endl;
    }
}