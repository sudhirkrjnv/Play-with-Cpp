#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number : ";
    cin >> n;

    if (n == 0) {
        cout << "Binary Code : 0" << endl;
        return 0;
    }

    int ans = 0;
    int p = 1;
    while (n > 0) {
        int bit = n % 2;
        ans = ans + bit * p;
        n = n / 2;
        p = p * 10;
    }

    cout << "Binary Code : " << ans << endl;
    return 0;
}
