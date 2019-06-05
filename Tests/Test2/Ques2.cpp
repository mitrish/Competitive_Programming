#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void PrintMinimumLength(string input){
    int count = 0, min = INT_MAX;
    string str,final;
    for(int i = 0; i< input.length();i++){
        if(input[i] != char(32)){
            count++;
            str = str + input[i];
            if(i == input.length() -1){
                if(count < min){
                min = count;
                final = str;
            }
            }
        }else{
            if(count < min){
                min = count;
                final = str;
            }
            count = 0;
            str = "";
        }
    }
    
    cout << final << endl;
}

int main(){
    string input;
    std::getline(std::cin, input);
    PrintMinimumLength(input);

}