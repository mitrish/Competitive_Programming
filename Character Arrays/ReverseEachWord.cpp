    #include<iostream>
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
        int start = 0, end = 0;
        for(int i = 0; str[i] != 0; i++){
            if(input[i] == ' '){
                end = i - 1;
                reverse(str, start, end);
                start = i + 1;
            }
        }
        end = i - 1;
        reverse(str, start, end);

    }

    int main(){
        string input;
        cin >> input;
        ReverseEachString(input);
    }