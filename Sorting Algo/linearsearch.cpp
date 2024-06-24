#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>&arr, int key){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    vector<int> V(arr, arr+n);

    int index = linearSearch(V, key);

    if(index != -1){
        cout << "Key present at index : " << index << endl;
    }else{
        cout << "Key is not Present "<< endl;
    }

}