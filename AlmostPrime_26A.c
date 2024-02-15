#include <stdio.h>

int is_prime(int x) {
    if (x <= 1) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int almost_prime_count = 0;
    
    for (int num = 1; num <= n; num++) {
        int prime_divisors = 0;
        
        for (int i = 2; i <= num; i++) {
            if (num % i == 0 && is_prime(i)) {
                prime_divisors++;
            }
            
            if (prime_divisors > 2) {
                break;  
            }
        }
        
        if (prime_divisors == 2) {
            almost_prime_count++;
        }
    }
    
    printf("%d\n", almost_prime_count);
    
    return 0;
}
