# include<iostream>
# include<bits/stdc++.h>
using namespace std;

void FindArrayRotation(int N, int * arr){
    int count = 0;
    for(int i = 0;i<N;i++){
        if(arr[i] < arr[i+1]){
            count++;
            if(i == N-1){
                count = 0;
            }
        }else{
            count++;
            break;
        }
    }
    cout << count;
}

int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i =0;i<N;i++){
        cin >> arr[i];
    }

    FindArrayRotation(N, arr);
}