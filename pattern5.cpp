// A
// BC
// DEF
// GHIJ
// KLMNO

#include<iostream>
using namespace std;

int main() {

    int n=5;
    char ch='A';

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<ch;
            ch++;
        }
        cout<<endl;
        
    }
}