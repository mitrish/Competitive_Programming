#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void CompressString(string str){
    string temp = str[0];
    string output;
    int count = 1;
    for(int i =0;i<str.length();i++){
        if(str[i] == temp){
            count++;
        }else{
            output = str[i] + count;
            temp = str[i];
            count = 1;
        }
    }

    cout << output;
}

int main(){
    string input;
    std::getline(std::cin, input);
    CompressString(input);
}