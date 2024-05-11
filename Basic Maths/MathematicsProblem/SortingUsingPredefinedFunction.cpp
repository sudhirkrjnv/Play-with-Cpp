#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    cout << "Enter total no of elements : ";
    int n;
    cin >> n;

    int arr[10];
    vector<int> ans;

    cout << "Enter elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        ans.push_back(arr[i]);
    }
    sort(ans.begin(), ans.end());

    for(int i = 0; i < n; i++){
        cout<< ans[i] << " ";
    }


}