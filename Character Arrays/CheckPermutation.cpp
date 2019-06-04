#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void CheckPermutation(string str1, string str2){
    int charactercount1[256] = {0};
    int charactercount2[256] = {0};
   
    if(str1.length() != str2.length()){
        cout << "False" <<endl;
        return;
    }

    
    for(int i =0; i<str1.length(); i++){
        
        charactercount1[str1[i]]++;
        charactercount2[str2[i]]++;
    
    }
    
    for(int i = 0; i < 256; i++){
        if(charactercount1[i] != charactercount2[i]){
            cout << "False" << endl;
            return;
        }
    }
    
    cout << "True" << endl;
    return;
}

int main(){
    string input1, input2;
    cin >> input1 >> input2;

    CheckPermutation(input1, input2);
}