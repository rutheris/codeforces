#include <algorithm>
#include <map>
#include <stdio.h>
#define MAX_N 200005
using namespace std;

map<int, bool> used;

int count(int x) {
  int old_x = x;
  int cnt = 0;
  while (x % 2 == 0 && used[x] == false) {
    x /= 2;
    cnt++;
  }
  used[old_x] = true;
  return cnt;
}

void solve() {
  used.clear();
  int n;
  int a[MAX_N];
  scanf("%d", &n);

  int result = 0;
  for (size_t i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    result += count(a[i]);
  }
  printf("%d\n", result);
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
