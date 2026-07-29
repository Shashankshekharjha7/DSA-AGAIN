#include<bits/stdc++.h>

using namespace std;

void printPattern(int n){
  //outer loop t0 handle row
  for(int i = 1; i<= n; i++){
    //inner loop to handle column
    for(int j= 1; j<=n-i; j++){
      cout << " ";
    }

    for(int j = 1; j<=i; j++){
      cout << "*";
    }
    cout << endl;
  }
}

int main(){
  
}