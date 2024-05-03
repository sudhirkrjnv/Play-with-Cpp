/*
        i/p :  Matrix : 
                0 0 0
                0 1 0
                0 0 0
        o/p : Total number of paths: 2
*/


#include<iostream>
using namespace std;

int findTotalPath(int *arr, int i, int j, int m, int n){
    // Base case
    if (i == m-1 && j == n-1){
        return 1;
    }
    if (i >= m || j >= n || arr[i*n+j] == 1){
        return 0;
    }

    return findTotalPath(arr, i+1, j, m, n) + findTotalPath(arr, i, j+1, m, n);
}

int main(){

    int m = 3, n = 3;
    int arr[m][n];

    cout << "Enter matrix (0 for empty cell, 1 for obstacle):" << endl;

    // Taking input row-wise
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int i = 0;
    int j = 0;
    int ans = findTotalPath((int *)arr, i, j, m, n);
    cout << "Total number of paths: " << ans << endl;

    /*
    //printing
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    */

    return 0;
}
