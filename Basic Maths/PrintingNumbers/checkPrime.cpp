#include<iostream>
using namespace std;
int main(){
    int i=2, n;

    cout << "Enter number to check Prime : ";
    cin >> n;

    bool isPrime = 1;

    while(i < n){
        if(n %i == 0){
            isPrime = 0;
            break;
        }
        i++;
    }

    if(isPrime == 1){
        cout << n << " : is Prime";
    } else{
        cout << n << " : is not Prime";
    }

}