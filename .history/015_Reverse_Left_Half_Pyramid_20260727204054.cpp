#include<bits/stdc++.h>

using namespace std;

void printPattern(int n){
  //outer loop to handle row
  for(int i = n; i>=1; i--){
    //inner loop to handle column
    for(int j = 1; j<= n-i; j++){
      cout << " ";
    }
    for(int j = 1; j<=i; j++)
  }
}