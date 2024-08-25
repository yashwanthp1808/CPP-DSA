#include<iostream>
using namespace std;

void binTodec(int binNumber) {
     int n = binNumber;
     int decNumber = 0;
     int pow = 1;   

     while(n>0) {
        int lastDigit = n%10;
        decNumber += lastDigit * pow;
        pow *=  2;
        n /= 10;

     }
     cout << decNumber<<endl;
}


int main() {
     
    binTodec(101); 
    return 0;
}

// i = i + 1
// i = i + 3
// i += 3