#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int GeometricSum(int k){
    if(k == 0 || k == 1){
        return 1;
    }else{
        return float(1/(2^k--)) + GeometricSum(k);
    }
}

int main(){
    int num;
    cout << float(GeometricSum(num));
}