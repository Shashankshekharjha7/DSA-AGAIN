#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
  int i,j;
  int num = 1;

  for(i = 1; i<=n; i++){
    for(j = 1;j<=i; j++){
      cout << num++ << " ";
    }
    cout << endl;
  }
}

int main(){
  int n = ;
  printPattern(n);

  return 0;
}