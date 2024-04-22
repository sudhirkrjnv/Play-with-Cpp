
//              * 
//            * * 
//          * * * 
//        * * * * 
//      * * * * *

#include<iostream>
using namespace std;
int main(){

    int r;
    
    cout << "Rows : " ;
    cin >>  r; //5

    for(int i=1; i<=r; i++){
        for(int j=1; j <= r-i; j++){
            cout << " " << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;

    }
    
}

