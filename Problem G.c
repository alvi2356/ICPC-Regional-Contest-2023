#include <stdio.h>
#include <string.h>

void solve(int t) {
    char s[100005]; // Assuming a maximum string size of 100,005
    scanf("%s", s);

    int n = strlen(s);
    int run = 0, wt = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'W') {
            wt++;
        } else {
            run += (s[i] - '0');
        }
    }

    int over = n / 6, balls = n % 6;
    printf("%d.%d %s %d %s %d %s.\n", over, balls, (over > 1 || (over == 1 && balls > 0)) ? "Overs" : "Over", run, (run > 1) ? "Runs" : "Run", wt, (wt > 1) ? "Wickets" : "Wicket");
}

int main() {
    int T = 1;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        solve(i);
    }
    return 0;
}
