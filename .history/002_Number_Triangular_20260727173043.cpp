#include <bits/stdc++.h>

using namespace std;

void printPattern(int n){
  //outer loop to handle rows
  for(int i = 1; i <= n; i++){
    
    //Inner loop to print leading spaces
    for(int j = 1; j<=n-i; j++){
      cout << " ";
    }

    //Inner loop to print the row number
    for(int j = 1; j <= i; j++){
      cout << i << " ";
    }

    //Move to next line
    cout << endl;
  }
}