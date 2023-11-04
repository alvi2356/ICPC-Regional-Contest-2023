#include <stdio.h>

long long solve(int arr[], int n) {
    long long count = 0;

    for (int i = 0; i < n; i++) {
        int current = arr[i];
        int j = i;
        while (j < n && arr[j] == current) {
            j++;
        }
        int length = j - i;
        count += (length * (length + 1)) / 2;
        i = j - 1;
    }

    return (long long)n * (n + 1) / 2 - count;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int j = 0; j < n; j++) {
            scanf("%lld", &arr[j]);
        }

        long long count = solve(arr, n);
        printf("Case %d: %lld\n", t, count);
    }

    return 0;
}
