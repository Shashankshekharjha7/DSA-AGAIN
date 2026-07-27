#include<bits/stdc++.h>

using namespace std;

void printPattern(int n){
  //outer loop to handle the upper part
  for(int i  = 1; i<=n; i++){
    for(int j = 1; j<=2*n; j++){
      
      //to print spaces
      if(i>j && j<=2*n-i){
        cout << " ";
      }
      else{
        cout << "*";
      }
    }
    cout << endl;
  }

  //outer loop to handle the lower part
  for(int i = n; i>=1; i--){
    for(int j = 1; j<=2*n; j++){

      //To print spaces
      if(j>i&&j<=2*n-i)
    }
  }
}