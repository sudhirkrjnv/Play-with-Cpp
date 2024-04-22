
//      * 
//      * * 
//      * * * 
//      * * * * 
//      * * * * *

#include<iostream>
using namespace std;
int main(){

    int r=5, c=5;
    int i=1;

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(j <= i){
                cout << "*" << " ";
            } else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
    
}

