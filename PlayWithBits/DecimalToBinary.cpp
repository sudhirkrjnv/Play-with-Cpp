#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n = 6;
    //cout << "Enter any number to convert into Binary : ";
    //cin >> n ;

    int ans = 1;
    int i = 0;
 
    while (n != 0){
        int bit = n & 1;
        cout << i << "th loop > bit : "<< bit << endl;
        ans = (bit * (int)pow(10, i)) + ans;
        cout << i << "th loop > ans : "<< ans << endl << endl;
        n = n >> 1;
        i++;
    }

    cout << " Binary Code : " <<ans << endl;

    return 0;
    
}