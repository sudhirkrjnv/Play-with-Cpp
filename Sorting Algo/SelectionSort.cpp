#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int>& arr, int n) {
    
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    vector<int> V(arr, arr+size);


    SelectionSort(V, size);
    
    
    return 0;
}
