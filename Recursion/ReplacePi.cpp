// Question to be solved, not solved yet
// Task is to replace the word "pi" in the input string with 3.14



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string ReplacePi(string input, int start){

    if(input[start] = '\0' || input[start + 1] = '\0'){
        return input;
    }
}

int main(){
    string input;
    cin >> input;
    cout << ReplacePi(input,0);
}