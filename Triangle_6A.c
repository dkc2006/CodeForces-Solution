#include <stdio.h>

int main() {
    int lengths[4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &lengths[i]);
    }

    // Sort the stick lengths in non-decreasing order
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (lengths[j] > lengths[j + 1]) {
                int temp = lengths[j];
                lengths[j] = lengths[j + 1];
                lengths[j + 1] = temp;
            }
        }
    }

    // Check the conditions to determine the output
    if (lengths[0] + lengths[1] > lengths[2] || lengths[1] + lengths[2] > lengths[3]) {
        printf("TRIANGLE\n");
    } else if (lengths[0] + lengths[1] == lengths[2] || lengths[1] + lengths[2] == lengths[3]) {
        printf("SEGMENT\n");
    } else {
        printf("IMPOSSIBLE\n");
    }

    return 0;
}
