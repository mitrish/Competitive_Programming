#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void GetLeaderElement(int N, int * arr){
    int temp = 0, leader, i = 1, flag = 1;
    while(temp < N){
        leader = arr[temp];
        if(arr[i] > leader){
            temp++;
            leader = arr[temp];
            i = temp -1;
            flag = 1;
        }
        if(i == N - 1){
            cout << leader << " ";
            temp ++;
            i = temp;
            flag = 0;
        }
        if(flag){
            i++;    
        }
        
    }
    /*for(int i = 1;i<N;i++){
        if(arr[i] > leader){
            temp++;
            leader = arr[temp];
            i = temp;
            cout << temp << " ";
        }
        if(i == N-1){
            //Confirm leader when whole array is traversed
    //        cout << leader << endl;
            
        }

    } */  
   // cout << leader << endl;
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0;i <N;i++){
        cin >> arr[i];
    }
    GetLeaderElement(N, arr);
}