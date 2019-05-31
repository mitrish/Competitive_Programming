#include <iostream>
using namespace std;

void FindUnique(int * arr, int size){
    for(int i =0;i<size;i++){
        int j;
        for (j = 0;j<size;j++){
            if(i!=j){
                if(arr[i] == arr[j]){
                    break;
                }
            }
        }
        if(j == size){
            cout << arr[i];
        }
    }
    
}

int main(){
   int size;
   cin >> size;
   int array[size];
   for(int i =0;i<size;i++){
       cin >> array[i];
   }

   FindUnique(array, size);
}