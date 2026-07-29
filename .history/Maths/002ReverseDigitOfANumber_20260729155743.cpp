#include<iostream>
#include<algorithm>

using namespace std;

int ReverseDigits(int n){
  int rev = 0;
  while(n>0){
    int lastDigit = n%10;
    rev = rev*10 + lastDigit;
    n = n/10;

  }
}

int main(){
  int n; 
  cin >> n;
  cout << "N: " << n << endl;
  int Rev = ReverseDigits(n);
  cout << "Reversed Digits: " << Rev << endl;

  return 0;
}