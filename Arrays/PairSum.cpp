# include <iostream>
using namespace std;

void PairSum(int size, int * arr, int sum){
    for(int i = 0 ;i < size;i++){
        for(int j = 0;j< size;j++){
            if( i == j){
                continue;
            }
            if(arr[i] + arr[j] == sum){
                if(arr[i] > arr[j]){
                    cout << arr[i] <<" " << arr[j];
                }else{
                    cout << arr[j] << " " << arr[i];
                }
            }
        }
    }
}


int main(){
    int N; //Size of the array
    cin >> N;
    int arr[N];
    for(int i = 0; i<N;i++){
        cin >> arr[i];
    }
    int sum;
    cin >> sum;

    PairSum(N, arr, sum);
}