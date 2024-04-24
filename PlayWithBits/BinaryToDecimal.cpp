#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int binary;
    cout << "Enter a binary code : ";
    cin >> binary;

    int ans = 0;

    while (binary != 0) {
        int digit = binary % 10;
        int i = 0;
        if(digit == 1){
            ans = digit * pow(2, i) + ans ;
        }
        i = i++;
        binary = binary / 10;
    }

    cout << "Decimal Number : ";
    cout << ans;

    cout << endl;


}
