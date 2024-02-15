#include <stdio.h>
#include <string.h>
 
int main() {
    char str[3][101];
    int count[3] = {0};
 
    for(int i = 0; i < 3; ++i) {
        gets(str[i]);
        for (int j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u') {
                count[i]++;
            }
        }
    }
 
    if (count[0] == 5 && count[1] == 7 && count[2] == 5) {
        printf("YES");
    } else {
        printf("NO");
    }
 
    return 0;
}