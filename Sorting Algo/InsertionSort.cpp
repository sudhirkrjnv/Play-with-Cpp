#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int>&arr, int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for( ; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            } else{
                break;
            }
        }
        arr[j+1] = temp; 
    }
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int size;

    cout << "Enter total no of elements in an array : ";
    cin >> size;

    int *arr = new int[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    vector<int> V(arr, arr+size);

    InsertionSort(V, size);

    return 0;

}