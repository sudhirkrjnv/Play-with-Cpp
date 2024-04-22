
//      * * * * * 
//      *       *
//      *       *
//      * * * * *

#include<iostream>
using namespace std;
int main(){

    int r=4, c=5;
    int i=1;

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i==1 || j==1 || i==r || j==c){
                cout << "*" << " ";
            } else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
    
}

