#include <bits/stdc++.h>
#include <ostream>
using namespace std;
#define ll long long int
bool sup(long long int x) {
  long long int l = 0, r = 1e9, k = 0;
  while (r - l > 1) {
    k = (l + r) / 2;
    if (k * k >= x)
      r = k;
    else
      l = k;
  }
  if (r * r == x)
    return true;
  return false;
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int a;
    long long int s = 0;
    cin >> a;
    int A[a + 2];
    for (int i = 0; i < a; i++)
      cin >> A[i], s += A[i];
    if (sup(s))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
