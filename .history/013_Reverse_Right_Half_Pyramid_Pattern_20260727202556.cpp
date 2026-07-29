#include<bits/stdc++.h>

using namespace std;

void printPattern(int n){
  //outer loop to handle row
  for(int i = 1; i<=n; i++){
    //inner loop to handle column
    for(int j = n; j>=i; j--){
      cout << "*" << " ";
    }
    cout << endl;
  }
}

int main(){
  int n = 6;
  printPattern(n);

  return 0;
}