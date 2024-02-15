#include <stdio.h>

int main() {
    int n, d;
    scanf("%d %d", &n, &d);

    int b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int moves = 0;
    for (int i = 1; i < n; i++) {
        if (b[i] <= b[i - 1]) {
            int diff = b[i - 1] - b[i];
            int additional_moves = (diff / d) + 1;
            moves += additional_moves;
            b[i] += additional_moves * d;
        }
    }

    printf("%d\n", moves);

    return 0;
}
