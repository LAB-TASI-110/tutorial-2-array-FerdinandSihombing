#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int current_val;
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    scanf("%d", &n);

    if (n <= 0) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &current_val);

        if (current_val < min_val) {
            min_val = current_val;
        }

        if (current_val > max_val) {
            max_val = current_val;
        }
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);

    return 0;
}
