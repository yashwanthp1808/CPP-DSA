//trapping rain water

#include<iostream>
using namespace std;

int trap(int *heights, int n) {
    int LeftMax[20000], RightMax[20000];
    LeftMax[0] = heights[0];
    RightMax[n-1] = heights[n-1];

    for(int i=1; i<n; i++) {
        LeftMax[i] = max(LeftMax[i-1], heights[i-1]);
    } 

    for(int i=n-2; i>=0; i--){    //n-2 becuase 2 defines minusing n from last second array, because last (1) is already defined as infinity
        RightMax[i] = max(RightMax[i+1], heights[i+1]);
    }

    int watertrapped = 0;
    for(int i=0; i<n; i++) {
        int currWater = min(LeftMax[i], RightMax[i]) - heights[i];
        if(currWater > 0) {
            watertrapped += currWater;
        }
    }
    cout<<"Water trapped is "<<watertrapped<<endl;
}


int main() {

    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);
    
    trap(heights, n);
    
    }