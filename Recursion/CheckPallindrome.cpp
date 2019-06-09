#include<iostream>
#include<bits/stdc++.h>
#include<bool.h>
using namespace std;

Bool CheckPallindrome(int start, int end, string input){
    string str = "";
    for(int i = start; i < end;i++){
        str += input[i];
    }
    if(input.length() == 1){
        return true;
    }
    if(start < end + 1){

    return CheckPallindrome(++start, --end, input);
    }

    return true;
}

int main(){

    string input;
    cin >> input;
    int start = 0;end = input.length();
    CheckPallindrome(start, end, input);
}