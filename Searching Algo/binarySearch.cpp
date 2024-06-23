#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&arr, int key){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end-start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid+1; 
        }else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
}

int main(){
    int n;
    cout<< "Total no of element in Array : ";
    cin >> n;

    vector<int> V;
    V.resize(n);
    cout << "input the elements :" << endl;
    for(int i=0; i<n; i++){
        cin >> V[i];
    }
    
    sort(V.begin(), V.end());

    int key;
    cout << "Which element we have to find ? ";
    cin >> key;

    int index = binarySearch(V, key);

    if(index !=-1){
        cout << "Found at index : " << index + 1 << "  (after sorting)" << endl;
    }else{
        cout << "Not Found";
    }

    /*for(int i:V){
        cout << i << " ";
    }*/

    return 0;
}