#include <iostream>
#include<deque>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    deque<int> d;

    while (decimal > 0) {
        int r = decimal % 2;
        d.push_front(r);
        decimal = decimal / 2;
    }

    cout << "Binary equivalent: ";
    for(int i: d){
        cout << i ;
    }

    cout << endl;


}
