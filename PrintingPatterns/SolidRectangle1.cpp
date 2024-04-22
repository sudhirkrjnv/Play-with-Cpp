
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<iostream>
using namespace std;
int main(){

    int r=4, c=5;
    int i=1;

    while( i <= r){
        int j = 1;
        while(j <= c){
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        j = 1;
        i++;
    }
    
}

