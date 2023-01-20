// Power of 2
#include <iostream>
using namespace std;

int no_of_set_bits(int n) {
  int count = 0;
  while(n){
    if (n & 1) {
    count++;
    }
    n = n>>1;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  int ans = no_of_set_bits(n);
  if (ans == 1) {
    cout << "Can be represented as power of 2";
  } 
  else {
    cout << "Cannot be represented as power of 2";
  }
}
