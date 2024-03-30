#include <cmath>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
#define MAX_N 200005
vector<bool> prime(1000005, true);

void eratoshene() {
  prime[0] = prime[1] = false;
  for (int i = 2; i <= 1000000; ++i)
    if (prime[i])
      if (i * 1ll * i <= 1000000L)
        for (int j = i * i; j <= 1000000L; j += i)
          prime[j] = false;
}

void solve() {
  int n;
  long long int a[MAX_N];
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (size_t i = 0; i < n; i++) {
    long long int s = sqrt(a[i]);
    if (s * s == a[i] && prime[s] == true) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}

int main() {
  eratoshene();
  solve();
  return 0;
}
