
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<iostream>
using namespace std;
int main(){

    int r, c;

    cout << "Rows : " ;
    cin >>  r; //4
    cout << "Column : " ;
    cin >>  c; //5

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    
}

