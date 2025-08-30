#include<iostream>
using namespace std;

void pattern16(int n){
    for(int  i = 0; i < n; i++){
        // space
        for(int j = 0; j<n - i - 1; j++){
            cout << " ";
        }
        // character
        char ch = 'A';
        for(int j = 0; j<=2*i; j++){
            cout << ch;
            ch = ch + 1;
        }
        // space 
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern16(n);
    }
}