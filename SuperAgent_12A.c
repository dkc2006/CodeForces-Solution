#include <stdio.h>

int main() {
    char matrix[3][4]; // 3x3 matrix + null terminator for each row

    // Read the input
    for (int i = 0; i < 3; i++) {
        scanf("%s", matrix[i]);
    }

    // Check if the password is symmetric
    int symmetric = 1; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Check if corresponding buttons are the same
            if (matrix[i][j] != matrix[2 - i][2 - j]) {
                symmetric = 0; // Not symmetric
                break;
            }
        }
        if (!symmetric) {
            break;
        }
    }

    // Print the result
    if (symmetric) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
