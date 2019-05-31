#include <iostream>
using namespace std;

void ArrayIntersection(int * arr1, int * arr2, int size1, int size2){
    for(int i =0;i<size1;i++){
        for(int j =0 ; j< size2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i];
                break;
            }
        }
    }
}

int main(){
    int size1, size2;
    cin >> size1;
    int arr1[size1];
    for(int i =0;i<size1;i++){
        cin >> arr1[i]; 
    }
    cin >> size2;
    int arr2[size2];
    for(int i = 0;i< size2;i++){
        cin >> arr2[i];
    }
    ArrayIntersection(arr1, arr2, size1, size2);
}