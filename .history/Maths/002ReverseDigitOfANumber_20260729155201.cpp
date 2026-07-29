#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int n; 
  cin >> n;
  cout << "N: " << n << endl;
  int Rev = ReverseDigits(n);
  cout << "Reversed Digits: " << Rev << endl;

  return 0;
}