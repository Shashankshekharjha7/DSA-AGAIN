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
  if(n == dup){
      cout << "Palindrome" << endl;
    }else{
      cout << "Not palindrome" << endl;
    }
}

int main(){
  int n;
  cin >> n;
  cout << "N: " << n << endl;;
  PalindromeNumber(n);

  return 0;
}