# include<iostream>
# include<bits/stdc++.h>
using namespace std;

void SumOfTwoArrays(int size1, int size2, int * arr1, int * arr2){
    int carry = 0;
    int l1 = size1 - 1, l2 = size2 - 1;
    int l3 = max(size1, size2);
    int sum[l3+1];
    while(l3 >= 0){
        if(l1 >= 0 && l2 >= 0){
            sum[l3] = carry + arr1[l1] + arr2[l2];
            if(sum[l3] > 9){
                carry = 1;
                sum[l3] %= 10;
                }else{
                    carry = 0;
                }
                l1--;
                l2--;
                l3--;
            }else if(l1 >= 0 && l2 < 0){
                sum[l3] = carry + arr1[l1];
                if(sum[l3] > 9){
                    carry = 1;
                    sum[l3] %= 10;
                }else{
                    carry = 0;
                }
                l1--;
                l3--;
            }
            else{
                sum[l3] = carry;
                l3--;
            }
        }
    }


int main (){
    int size1 = 0, size2 = 0;
    cin >> size1;
    int arr1[size1];
    for(int i = 0; i < size1; i++){
        cin >> arr1[i];
    }
    cin >> size2;
    int arr2[size2]; 
    for(int i = 0; i< size2;i++){
        cin >> arr2[i];
    }

    SumOfTwoArrays(size1, size2, arr1, arr2);

}