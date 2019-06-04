#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void RemoveConsecutiveDuplicates(string str){
    string output;
    char temp = str[0];
    output += temp;
    for(int i = i; i < str.length(); i++){
        if(temp == str[i]){
            continue;
        }else{
            temp = str[i];
            output += temp;
        }
    }

    cout << output << endl;
}

int main(){
    string input;
    cin >> input;
    RemoveConsecutiveDuplicates(input);
}