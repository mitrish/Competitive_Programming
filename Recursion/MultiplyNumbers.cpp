#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MultiplyNumbers(int m, int n) {
    int temp;
    if(m<n){
        temp = m;
        m = n;
        n = temp;
    }
    if(n==0){
        return 0;
    }
    return m+multiplyNumbers(m,n-1);
}

int main(){
int m,n;
cin >> m;
cin >> n;
cout << MultiplyNumbers(m,n);
 
}