#include<iostream>
#include<vector>
using namespace std;


bool isPrime(int n){
    if( n <= 1){
        return 0;
    }
    for(int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n1, n2;
    cout << "Enter starting number from which we have to print prime numbers: ";
    cin >> n1;
    cout << "Enter ending number up to which we have to print prime numbers: ";
    cin >> n2;
    vector<int> v;

    // Loop through the numbers from n1 to n2

    for (int i = n1; i <= n2; ++i) {
        if (isPrime(i)) {
            v.push_back(i);
        }
    }

    for( int i: v){
        cout << i << " ";
    }

    return 0;
}