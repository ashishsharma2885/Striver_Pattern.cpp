#include<iostream>
using namespace std;

void pattern10(int n){
     int starts = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) starts = 1;
        else starts = 0;
        for(int j = 0; j <= i; j++){
            cout << starts;
            starts = 1 - starts;
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
        pattern10(n);
    }
}