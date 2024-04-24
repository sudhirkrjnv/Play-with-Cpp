#include <iostream>
using namespace std;
int main(){
    int n = 5;
    cout << "Enter any number : ";
    cin >> n;

    int m = n;

    if (n == 0){
        cout << 1;
    }

    int mask  = 0;

    while( m !=0 ){
        mask = (mask << 1) + 1; 
        m = m >> 1;
    }
    int ans = (~n) & mask;

    cout << "Complement of given no having base 10 is : " <<ans << endl;

}