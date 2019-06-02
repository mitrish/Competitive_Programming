# include<bits/stdc++.h>
using namespace std;
# include <iostream>

void SortZerosAndOnes(int N, int * arr){
    int numzeros, numones = 0;
    for(int i =0;i<N;i++){
        if(arr[i] == 0){
            numzeros += 1;
        }else if(arr[i] == 1){
            numones += 1;
        }
    }

    // sorted array
    for(int k = 0;k < numzeros;k++){
        arr[i] = 0;
    }   
    for(int k = numzeros; k< numones; k ++){
        arr[k] = 1;
    }
    
}

int main (){
   int N;
   cin >> N;
   int arr[N];
   for(int i = 0;i <N;i++){
       cin >> arr[i];
   }
    SortZerosAndOnes(N, arr);
}