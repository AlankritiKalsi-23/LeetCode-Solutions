// Power of 2
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 1;
  for (int i = 0; i <= 30; i++) {
    if (n == ans) {
      return true;
    }
    if (ans < INT_MAX / 2)
      ans = ans * 2;
  }
  return false;
}
