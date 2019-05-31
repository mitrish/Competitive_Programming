#include <iostream>
using namespace std;

void FindDuplicate(int * array, int size){
    int duparr[size-2];
    for(int i =0;i<size;i++){
        duparr[array[i]]++;
        
    }
    for(int i =0;i<size-2;i++){
        if(duparr[i] == 1){
            cout << array[i];
            return;
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

   FindDuplicate(array, size);
}