    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;

    void ReverseEachString(string str){
        string output,temp;
        for(int i = str.length(); i > 0; i--){
            if(str[i] == "\t"){
                output += str[i]
            }
            temp = str[i];
            output = temp + output;
        }

        cout << output << endl;
    }

    int main(){
        string input;
        cin >> input;
        ReverseEachString(input);
    }