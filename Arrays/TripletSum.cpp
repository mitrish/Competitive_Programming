# include<iostream>
# include <bits/stdc++.h>
using namespace std;

void OrderTriplets(int a, int b, int c){
    // sort elements in ascending order
    if( a > b && b > c){
        printf("%d\t%d\t%d",a,b,c);
    }else if(a > b && b < c){
        printf("%d\t%d\t%d",a,c,b);        
    }else if(b > a && a > c){
        printf("%d\t%d\t%d",b,a,c);
    }else if(b > a && a < c){
        printf("%d\t%d\t%d",b,c,a);
    }else if( c > a && a > b){
        printf("%d\t%d\t%d",c,a,b);
    }else if( c > a && a < b){
        printf("%d\t%d\t%d",c,b,a);
    }
}

void TripletSum(int N, int * arr, int sum){
    for(int i = 0;i< N-2,i++){
        unordered_set<int> s;
        int remaining = sum - arr[i];
        for(int j = i +1, j < N;j++){
            if(s.find(remaining - arr[j]) != s.end()){
                OrderTriplets(arr[i], arr[j], remaining - arr[j]);
            }
            s.insert(arr[j]);
        }
    }
}

int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i =0;i < N;i++){
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    TripletSum(N, arr, sum);
}