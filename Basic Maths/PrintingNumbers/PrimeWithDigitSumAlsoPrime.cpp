// Prime Number between two numbers whose digit sum  is also prime
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
int digitSum(int n){
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n1, n2;
    cout << "Enter starting number : ";
    cin >> n1;
    cout << "Enter ending number : ";
    cin >> n2;
    vector<int> v;

    for (int i = n1; i <= n2; ++i) {
        if (isPrime(i) && isPrime(digitSum(i))) {
            v.push_back(i);
        }
    }


    for( int i: v){
        cout << i << " ";
    }

    return 0;
}