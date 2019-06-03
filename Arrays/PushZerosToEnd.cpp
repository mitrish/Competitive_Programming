# include <iostream>
# include <bits/stdc++.h>
using namespace std;

void PushZerosToEnd(int N, int * arr){
    int count = 0;

    for(int i = 0;i < N ; i++){
        if(arr[i] != 0){
            arr[count++] = arr[i];
        }
    }

    while(count < n){
        arr[count++]  = 0;
    }
}

int main(){
    int N;
    cin >> N:
    int arr[N];
    for(int i =0;i<N;i++){
        cin >> arr[i];
        if(arr[i] == 0){
            count++;
        }
    }

    PushZerosToEnd(N,arr);
}