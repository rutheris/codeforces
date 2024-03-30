#include <cstring>
#include <stdio.h>
#define MAX_N 200005

int min(int a, int b) { return a > b ? b : a; }

void solve() {
  char a[MAX_N], b[MAX_N];
  scanf("%s", a);
  scanf("%s", b);

  int len = strlen(a);
  int count_fours = 0;
  int count_sevens = 0;
  int operations = 0;
  for (size_t i = 0; i < len; i++) {
    if (a[i] != b[i]) {
      if (a[i] == '4')
        count_fours++;
      else
        count_sevens++;
    }
  }

  int min_ops = min(count_sevens, count_fours);
  operations += min_ops;
  count_sevens -= min_ops;
  count_fours -= min_ops;
  operations = operations + count_fours + count_sevens;

  printf("%d\n", operations);
}

int main() {
  // freopen("input.txt", "r", stdin);
  solve();
  return 0;
}
