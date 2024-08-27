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

int main() {

int a =IsPrime(20);
cout<<"IF IT IS PRIME NUMBER THEN 1, IF NOT A PRIME NUMBER THEN 0 WILL BE PRINTED\n"<<a<<endl;

}