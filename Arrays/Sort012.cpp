# include<iostream>
# include<bits/stdc++.h>
using namespace std;

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Sort012(int N, int * arr){
    
    int low = 0, mid = 0;
    int high = N -1;
    while(mid <= high){
        switch(arr[mid]){
            case 0: swap(&arr[low++], &arr[mid--]);
                    break;
            case 1: mid++;
                    break;
            case 2: swap(&arr[mid], &arr[high--]);
                    break;
        }
    }

    for(int i = 0; i< N;i++){
        cout << arr[i];
    }
}


int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N;i++){
        cin >> arr[i];
    }

    Sort012(N, arr);
}