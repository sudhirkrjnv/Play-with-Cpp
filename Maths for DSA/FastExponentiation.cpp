#include<bits/stdc++.h>
using namespace std;

double power(double a, long long int n){
    double ans = 1.0;
    
    if (n < 0) {
        a = 1.0 / a;  
        n = static_cast<unsigned long long int>(-n);
    }
    while(n > 0){
        if(n&1){
            ans = ans * a;
        }
        a = a*a;
        n = n >> 1;
    }
    return ans;
}

int main(){

    // a^n = ans

    double x;
    cin >> x;  //taking input for base

    long long int n;
    cin >> n;  //taking input for power

    double mypower = power(x, n);
    cout << mypower;

    return 0;
}