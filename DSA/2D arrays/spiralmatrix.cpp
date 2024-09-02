#include<iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m) {
    int startingRow = 0, startingColoumn = 0;
    int endingRow = n-1, endingColoumn = m-1;

    while(startingRow <= endingRow && startingColoumn <= endingColoumn) {
        //top
        for(int j=startingColoumn; j<=endingColoumn; j++) {//using j because now coloumn term is being used,i for row, j for coloumn
            cout<<mat[startingRow][j]<<" ";   //[starting row is common]
        }
        //right
        for(int i=startingRow+1; i<=endingRow; i++) {
            cout<<mat[i][endingColoumn]<<" "; //[endingcoloumn is common]
        }
        //bottom
        for(int j=endingColoumn-1; j>=startingColoumn; j--) {//j>= and j-- because now it is going in reverse(backwars)
         if(startingRow == endingRow) {
            break;
         }
            cout<<mat[endingRow][j]<<" ";
        }
        //left
        for(int i=endingRow-1; i>=startingRow+1; i--) {
            if(startingRow == endingRow){
                break;
            }
            cout<<mat[i][startingColoumn]<<" ";
        }
        startingRow++; startingColoumn++;
        endingRow--; endingColoumn--;
    }
    cout<<endl;
}


int main() {

    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10,11,12},
                     {13,14,15,16}};

    spiralMatrix(mat, 4, 4); 
}