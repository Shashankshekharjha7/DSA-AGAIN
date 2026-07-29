#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
  //outer loops to handle the rows
  for(int i = 0; i<n; i++){
    
    //inner loop to handle columns
    for(int j = 0; j < n; j++){
      //print "*" on the boundary
      if(i == 0 || j==0 || i == n-1 || j == n-1){
        cout << "*";
      }
      
    }
  }
}