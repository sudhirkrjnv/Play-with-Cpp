#include<bits/stdc++.h>
using namespace std;

int compression(vector<char>&chars){
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while( i < n ){

        int j = i+1;

        // traversing and increasing 'j' until other character didn't found
        while(j<n && chars[i] == chars[j]){
            j++;
        }

        // storing the character at ansIndex => 1. Storing Character 2. Storing count of character 
        chars[ansIndex++] = chars[i];
           
        int count = j-i;
        if(count > 1){
            string cnt = to_string(count);
            for(char c : cnt){
                chars[ansIndex++] = c;
            }
        }

        // moving to new character
        i = j;
  
    }

    return ansIndex;
    
}

int main(){

    vector<char> chars;
    string input;

    getline(cin, input);  // taking input separated by space

    for(char c : input){
        if( c != ' '){
            chars.push_back(c);
        }
    }

    int ansIndex = compression(chars);

    for(int i=0; i<ansIndex; i++){
        cout << chars[i];
    }

/*
    for(char c : chars ){
        cout << c ;
    }
*/


    
}