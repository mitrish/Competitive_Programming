#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int CountZeros(int n){
    if(n == 0){
        return 0;
    }
    
    if(n%10 == 0){
        return 1 + CountZeros(n/10);
    }else{
        return CountZeros(n/10);
    }
    
}

int main(){
    int num;
    cin >> num;
    cout << CountZeros(num);
}