#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void RemoveCharacter(string str, char c){
    string output = "";
    for(int i = 0; i < str.length(); i++){
        if(str[i] != c){
            output += str[i];
        }
    }
    cout << output << endl;
}

int main(){
    char c;
    string input;
    cin >> input;
    cin >> c;
    RemoveCharacter(input, c);
}