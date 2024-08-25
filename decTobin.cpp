#include<iostream>
using namespace std;

void decTobin(int decTobinn) {
    int n = decTobinn;
    int pow = 1;
    int binNumber = 0;
    
    while(n>0) {
        int rem = n % 2;
        binNumber += rem * pow;
        n /= 2;
        pow *= 10;

    }
cout<<binNumber<<endl;
}
   


int main() {
    
     decTobin(4);

    return 0;
}