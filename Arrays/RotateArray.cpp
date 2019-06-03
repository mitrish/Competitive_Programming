# include<iostream>
# include<bits/stdc++.h>
using namespace std;


void RotateArray(int N, int * arr, int cut){
    int finalarr[N];
    for(int i = 0 ;i<N;i++){
        if(i < cut){
            finalarr[N-cut + i] = arr[i];
            cout << finalarr[N-cut+i] << endl;
        }else{
            finalarr[i-cut] = arr[i];    
        }
        
    }

    for(int i = 0 ;i <N;i++){
        cout << finalarr[i];
    }
}

int main(){
    int N, cut;
    cin >> N;
    int arr[N];
    for(int i = 0;i<N;i++){
        cin >> arr[i];
    }
    cin >> cut;
    cout << "THis is cut" << cut << endl;
    RotateArray(N,arr,cut);
}