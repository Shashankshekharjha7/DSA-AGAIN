#include<bits/stdc++.h>

using namespace std;

void printPattern(int n){
  //outer loop for row
  for(int i = 1; i<=n; i++){

    //inner loop for column
    for(int j = n-1; j >= i; j--){
      cout << j << " ";
    }
    cout << endl;
  }
}

int main(){
  int n = 6;
  printPattern(6);

  return 0;
}