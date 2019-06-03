# include<iostream>
# include<bits/stdc++.h>
using namespace std;


void SecondLargestInArray(int N, int * arr){
    int first, second = INT_MIN;
    for(int i = 0; i<n;i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }else{
            if(arr[i] > second && arr[i] != first){
                second = arr[i];
            }
        }
    }
    cout << second;
}

int main(){
    int N;
    cin >>N;
    int arr[N];
    for(int i = 0;i<N;i++){
        cin >> arr[i];
    }

    SecondLargestInArray(N,arr);
}