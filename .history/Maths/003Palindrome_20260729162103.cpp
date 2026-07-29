#include<iostream>
#include<algorithm>

using namespace std;

int PalindromeNumber(int n){
  int revNum = 0;
  int dup = n;
  while(n>0){
    int lastDigit = n%10;
    revNum = revNum* 10 + lastDigit;
    n = n/10;
    
  }
  
}

int main(){
  int n;
  cin >> n;
  cout << "N: " << n;
  PalindromeNumber(n);

  return 0;
}