#include<iostream>
using namespace std;

void pattern19(int n){
    int spaces = 2*n - 2;
   for(int i = 1; i <=2*n-1; i++){
    // star
   int star = i;
   if(i > n) star = 2*n - i;
   // star
   for(int j = 1; j <= star; j++){
    cout << "*";
   }
    // space
    for(int j = 1; j <= spaces; j++){
    cout << " ";
    }
    // start
    for(int j = 1; j <= star; j++){
    cout << "*";
   }
   cout << endl;
   if(i < n) spaces -= 2;
   else spaces += 2;
   }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n; 
        cin >> n;
        pattern19(n);
    }
}