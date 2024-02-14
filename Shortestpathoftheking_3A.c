#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[3], t[3];
    scanf("%s", s);
    scanf("%s", t);

    int dx = abs(s[0] - t[0]);
    int dy = abs(s[1] - t[1]);
    int moves = dx > dy ? dx : dy; // Maximum of dx and dy

    printf("%d\n", moves);

    while (dx > 0 || dy > 0) {
        if (s[0] < t[0]) {
            putchar('R');
            s[0]++;
        } else if (s[0] > t[0]) {
            putchar('L');
            s[0]--;
        }

        if (s[1] < t[1]) {
            putchar('U');
            s[1]++;
        } else if (s[1] > t[1]) {
            putchar('D');
            s[1]--;
        }

        putchar('\n');
        dx--;
        dy--;
    }

    return 0;
}
