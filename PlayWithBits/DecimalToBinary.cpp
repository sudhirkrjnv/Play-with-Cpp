#include <iostream>
#include<deque>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    deque<int> d;

    while (decimal > 0) {
        int rem = decimal % 2;
        d.push_front(rem);
        decimal = decimal / 2;
    }

    cout << "Binary Code : ";
    for(int i: d){
        cout << i ;
    }

    cout << endl;


}
