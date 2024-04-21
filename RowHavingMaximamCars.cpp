#include <iostream>
using namespace std;
int main(){

    int m, n ;

    cout << "Rows : " ;
    cin >>  m;
    cout << "Column : " ;
    cin >>  n; 

    int arr[m][n];
    
    //taking matrix input 
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    
    //initializing variables and checking conditions
    int maxCars = -1;
    int ans = -1;

    for(int i=0; i<m; i++){
        int carcount = 0;
        for(int j=0; j<n; j++){
            if(arr[i][j] == 1){
                carcount ++;
            }
        }
        if(carcount >= maxCars){
            maxCars = carcount;
            ans = i;
        }
    }

    cout << ans + 1;

    
}