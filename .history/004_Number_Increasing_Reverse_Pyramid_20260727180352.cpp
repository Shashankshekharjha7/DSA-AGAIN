#include<bits/stdc++.h>

using namespace std;

void printPattern(int n){
  //outer loop for row
  for(int i = n; i>=1; i++){

    //inner loop for column
    for(int j = 1; j >= n-1; j--){
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