#include <iostream>
using namespace std;

// Factorial : 5 ! = 5 * 4 * 3 * 2 * 1
int fact(int m){
    int ans = 1;
    for (int i = 1; i <=m ; i++){
      ans  = ans * i; 
    }
    return ans;
}

// nCr = (n)! /  {(r)! * (n-r)!}
int nCr(int n, int r){
  int num = fact(n);

  int den = fact(r) * fact(n-r);

  float ans = (num) / (den);

  return ans;
}


int main(){

    int m , n, r;
    cout << "Enter an integer to calculate factorial : ";
    cin >> m ;
    cout << "Enter two integer to calculate nCr : ";
    cin >> n >> r;
    
    cout << "Factorial of given integer is : " << fact(m) << endl;
    cout << "nCr of given integer is : " << nCr(n,r) << endl;

}