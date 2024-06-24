#include<bits/stdc++.h>
using namespace std;

long long int squareroot(int n){
    long long int start = 0;
    long long int end = n;
    long long int mid = start + (end-start)/2;

    long long int ans = -1;

    while(start<=end){
        long long int square = mid*mid;

        if(square == n){
            return mid;
        }

        if(square < n){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){

    int n;
    cin >> n; // taking input whose squareroot is required

    int sqrt = squareroot(n);

    cout << sqrt;

    return 0;
}