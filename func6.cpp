#include<iostream>
using namespace std;

bool IsPrime(int n) {

    for(int i=2; i<=n-1; i++) {
        if(n%i==0) {
            return false;
        } else {
            return true;
        }
    }
}

void allPrimes(int n) {
     cout<<"The prime numbers are"<<endl;
    for(int i=2; i<=n; i++) {
        if(IsPrime(i)) {
            cout<<i<<" ";
        }
    }
cout<<endl;
}

int main() {

    allPrimes(100);
    return 0;
}