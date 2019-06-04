    #include<iostream>
    #include<stdio.h>
    #include<bits/stdc++.h>
    using namespace std;

    void reverse(string str, int start, int end){
        while(start < end){
            char temp = str[start];
            str[start] = str[end];
            start++;
            end--; 
        }
    }
    void ReverseEachWord(string str){
        // Input string - Rishabh Mittal
        // Output string - hbahsiR lattiM
        int start = 0, end = 0,i;
        for(i = 0; str[i] != 0; i++){
            if(str[i] == ' '){
                end = i - 1;
                reverse(str, start, end);
                start = i + 1;
            }
        }
        
        cout << str << endl;
    }

    int main(){
        string input;
        std::getline(std::cin, input);
        ReverseEachWord(input);
        cout << input << endl; 
    }