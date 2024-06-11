#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int>& arr, int n) {
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if (arr[j+1] < arr[j]){
                swap(arr[j+1], arr[j]);
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> V;
    int size;

    cout << "Enter the number of elements : ";
    cin >> size;

    V.resize(size);

    cout << "Enter the elements of the vector:" << endl;
    for(int i = 0; i < size; ++i) {
        cin >> V[i];
    }

    BubbleSort(V, size);
    
    return 0;
}
