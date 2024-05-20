#include<iostream>
using namespace std;
/*
    //   a ^ N = R
int FastExponential(int a, int N){
    if( N == 0){
        return 1;
    }else if (N == 0)
    {
        return a;
    } else{
        int R = power(a, N/2);
        if( N%2 == 0){
            return R*R;
        }else{
            return R*a*R;
        }
    }
    
}
*/

int FastExponential(int a, int N){
    int res = 1;
    while(N > 0){
        if( N & 1 ){
            res = 1LL*res * a;
        }
        a = 1LL * a * a ;
        N = N >> 1;
    }
    return res;
}

int main(){
    int a, N;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter N : ";
    cin >> N;

    int ans = FastExponential(a, N);

    cout << " Ans = a ^ N =  " << ans <<endl;

}