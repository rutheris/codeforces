#include <stdio.h>
#define MAX_N 200005

int binary_search(long long int n, long long int s) {
  long long int l = 0, r = s + 1;
  long long int m;
  long long int count_x = (n - (n + 1) / 2) + 1;

  while (r - l > 1) {
    m = (l + r) / 2;
    if (count_x * m <= s)
      l = m;
    else
      r = m;
  }

  return l;
}

void solve() {
  long long int n, s;
  scanf("%lld", &n);
  scanf("%lld", &s);

  printf("%d\n", binary_search(n, s));
}

int main() {
  // freopen("input.txt", "r", stdin);
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return 0;
}
