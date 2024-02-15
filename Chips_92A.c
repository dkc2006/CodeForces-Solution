#include <stdio.h>
 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int walrus = 1;
    while (m >= walrus) {
        m -= walrus; 
        walrus = (walrus % n) + 1; 
    }
    
    printf("%d\n", m);
    
    return 0;
}