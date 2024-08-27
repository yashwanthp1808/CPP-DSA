//using break statement

#include<iostream>
using namespace std;

int main() {

    int i=1;
    while (i<=10)
    {
        if(i==6){
            break;
        }

        cout<<i<<" ";
        i++;
    }
    
}

//here what happened means since we gave a condition of break 
//that  when i reaches 6, it should stop looping to next because of break statement.