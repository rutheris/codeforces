#include <stdio.h>
#define MAX_N 200005

void solve() {
  int n;
  int s[MAX_N];
  int f[MAX_N];
  scanf("%d", &n);
  for (size_t i = 0; i < n; i++) {
    scanf("%d", &s[i]);
  }
  for (size_t i = 0; i < n; i++) {
    scanf("%d", &f[i]);
  }

  int last_finished_job = 0;
  int job_time_spent = 0;
  for (size_t i = 0; i < n; i++) {
    if (s[i] < last_finished_job)
      job_time_spent = f[i] - last_finished_job;
    else
      job_time_spent = f[i] - s[i];
    last_finished_job = f[i];
    printf("%d ", job_time_spent);
  }
  printf("\n");
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
