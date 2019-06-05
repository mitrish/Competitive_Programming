#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintTwoDArray(int * arr, int row, int col){
    int count = 0;
    for(int i = 0;i < row;i++){
        for(int k = 0;i < row - count; i++){
            for(int j = 0; j < col; j++){
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
        count++;
    }
}

int main(){
    int row,col;
    cin >> row >> col;
    int arr[row][col];
    for(int i = 0;i<row;i++){
        for(int j =0;j<col;j++){
            cin >> arr[i][j];
        }
    }
    PrintTwoDArray(arr,row,col);
}