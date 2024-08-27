//to check odd or even using funcions 

#include<iostream>
using namespace std;

bool IsEven(int a) {
    if(a % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int x = IsEven(4);
    cout<<x;
}