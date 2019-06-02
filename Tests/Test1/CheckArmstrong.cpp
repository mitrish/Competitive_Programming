# include <iostream>
# include <bits/stdc++.h>
using namespace std;

void CheckArmstrong(int number){
    int temp = number;
    int rem,value = 0,digit, noofdigit = 0;
    while(temp != 0){
        temp = temp/10;
        noofdigit += 1;
    }
    temp = number;
    while(temp != 0){
        rem = temp%10;
        value += rem^noofdigit;
        temp = temp/10;
    }
    if(value == number){
        printf("True\n");
    }else{
        printf("False\n");
    }
}

int main (){
    int number;
    cin >> number;
    CheckArmstrong(number);
}