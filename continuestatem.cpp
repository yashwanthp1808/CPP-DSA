//continue statement

#include<iostream>
using namespace std;

int main() {

    int i;
    
    for(i=1; i<=10; i++) {
        if(i==6){
            continue;
        }
        cout<<i<<" ";
    }
}

//in break statement upto 6 stopped
//here continue statement skips 6 and prints all remaining numbers or things.