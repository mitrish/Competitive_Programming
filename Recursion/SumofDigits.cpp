#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SumofDigits(int input){
    int sum = input % 10;
    if(0 < input && input < 9){
        return input;
    }
    return sum + SumofDigits(input/10);
}

int main(){
    int input;
    cin >> input;
    cout << SumofDigits(input);
}