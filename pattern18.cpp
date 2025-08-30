#include<iostream>
using namespace std;

void pattern18(int n){
    int space = 0;
    for(int i = 0; i < n; i++){
        // star
        for(int j = 1; j<= n - i; j++) {
            cout << "*";
        }
        // space
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        // star
        for(int j = 1; j<= n - i; j++) {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }

    space = 8;
     for(int i = 1; i <= n; i++){
        // star
        for(int j = 1; j<= i; j++) {
            cout << "*";
        }
        // space
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        // star
        for(int j = 1; j<= i; j++) {
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
   
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern18(n);
    }
}