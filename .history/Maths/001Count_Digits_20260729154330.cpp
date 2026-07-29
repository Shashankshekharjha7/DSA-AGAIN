#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

int countDigits(int n){
  //initialize a counter variable 
  //cnt to store the count of digits
  int cnt = 0; 
  //while loop iterates until 'n'
  //becomes 0(no more digits left);
  while(n>0){
    //increment the counter
    //for each digit enconuntered
    cnt = cnt+1;
    //Divide 'n' by 10 to
    //remove the last digit
    n = n/10;

  }
  return cnt;
}

int main(){
  int n = 329823;
  cout<< "N:" << n << endl;
  int digits = countDigits(n);
  cout << "Number of digits" << digits << endl;
  return 0;
}