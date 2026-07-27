#include<bits/stdc++.h>

using namespace std;

void printPattern(int n){
  //outer loop to handle rows
  for(int i = 1; i<=n; i++){
    //inner loop to handle columns
    for(int j = 1; j<=n; j++){
      cout << "*" << " ";
    }
    cout << endl;
  }
}

int main(){
  int n = 5;
  printPattern(n);

  return 0;
}