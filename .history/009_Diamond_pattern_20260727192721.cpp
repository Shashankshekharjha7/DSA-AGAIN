#include<bits/stdc++.h>

using namespace std;

void printPattern(int n){
  //outer loop
  for(int i = 1; i<=n; i++){
    //inner loop (spaces)
    for(int j = 1; j<=n-i; j++){
      cout << " ";
    }
    for(int j = 1; j<=2*i-1; j++){
      cout << " * ";
    }
    cout << endl;
  }

  //outer loop to handle lower part
  for(int i = n-1; i>=1; i--){
    for(int j = 1; j<=n-i)
  }
}

int main(){
  int n= 6;
  printPattern(n);

  return 0;
}