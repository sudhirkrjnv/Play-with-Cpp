#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << " No of array element for searching : ";
    int n;
    cin >> n;

    cout << " Enter the arr elements for searching : ";
    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
     
}