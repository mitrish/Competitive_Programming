#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void HighestOccurringCharacter(string str){
    int count[256];
    for(int i = 0;i < str.length(); i++){
        count[str[i]]++;
    }
    int MAX = -1,index;
    for(int i = 0; i < 256; i++){
        if(count[i] > MAX){
            MAX = count[i];
            index = i;
        }
    }
    cout << str[index];
}
int main (){
    string input;
    std::getline(std::cin, input);
    HighestOccurringCharacter(input);
}