#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int heights[101];  
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
    }

    int min_diff = 1001; 
    int soldier1 = -1;
    int soldier2 = -1;

    for (i = 0; i < n; i++) {
        int diff = abs(heights[i] - heights[(i + 1) % n]);
        if (diff < min_diff) {
            min_diff = diff;
            soldier1 = i + 1;  
            soldier2 = (i + 1) % n + 1;  
        }
    }

    printf("%d %d\n", soldier1, soldier2);

    return 0;
}
