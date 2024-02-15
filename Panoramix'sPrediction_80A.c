#include <stdio.h>
 
int is_prime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1; 
}
 
int next_prime(int x) {
    x++;
    while (!is_prime(x)) {
        x++;
    }
    return x;
}
 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
 
    if (next_prime(n) == m) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}