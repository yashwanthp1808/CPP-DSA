//buy and sell stockes

#include<iostream>
using namespace std;

void maxProfit(int *prices , int n) {
    int bestbuy[100000];
    bestbuy[0] = INT16_MAX;
    for(int i=1; i<=n; i++) {
        bestbuy[i] = min(bestbuy[i-1], prices[i-1]);
    }

    int maxProfit = 0;
    for(int i=0; i<n; i++ ) {
        int currProfit = prices[i] - bestbuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout<<"The max profit is "<<maxProfit<<endl;
}


int main() {

    int prices[6] = {2,4,3,7,5,6};
    int n = sizeof(prices)/sizeof(int); 

    maxProfit(prices, n);
}