#include<iostream>
using namespace std;

void pattern7(int n){
    for(int i = 0; i < n; i++){
       // print the spaces
       for(int j = 0; j < n - i - 1; j++){
        cout << " ";
       }
      // print the stars
         for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
         }
       // print the spaces
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
        pattern7(n);
    }
}