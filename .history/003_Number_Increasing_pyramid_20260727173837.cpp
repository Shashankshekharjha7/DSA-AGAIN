#include<bits/stdc++.h>

using namespace std;

void printPattern(int n){
  //outer loop for rows
  for(int i = 1; i<=n; i++){
    //inner loop for columns
    for(int j = 1; j<=i;j++){
      cout << i;
    }
  }
  cout << endl;
}
int main(){
  int n= 6;
  printPattern(n);

  return 0;
}