#include<iostream>
using namespace std;

int main() {

    int marks[5] = {1,2,3,4,5};

    cout<<"The size of marks is "<<sizeof(marks)<<endl; //its a size of an array
    cout<<"The size of data type(int) is "<<sizeof(int)<<endl; 
    cout<<"The length of an array is "<<sizeof(marks)/sizeof(int)<<endl;
    
}
