#include<iostream>
using namespace std;
int main(){
    int i=2, n;
    cout << "Enter number up to which we have print prime number : ";
    cin >> n;

    while(i < n ){
        int divisor = 2;
        bool isPrime = 1;
        while(divisor < i){
            if(i %divisor == 0){
                isPrime = 0;
            }
            divisor ++;
        }

        if(isPrime){
            cout << i << endl;
        }

        i++;

    }
}