#include<iostream>
using namespace std;
int main(){
    cout << "Finding no of animals having 2 and 4 legs" << endl;

   int x,y ; // x denoting two legs animals and y denotings four legs animals
   int n,l ; // 

    //taking input from users
    cout << "enter total no of Animals" << endl;
    cin >> n;
    cout << "enter total no of Legs" << endl;
    cin >> l;

    // Calculation part
     y = (n - x) ;
     x = (4*n - l)/2;
     y = (n - x);

    // printing the numbers
    cout << "Total no of 2 Legs animals" << endl;
    cout << x << endl;
    cout << "Total no of 4 Legs animals" << endl;
    cout << y;
    
}