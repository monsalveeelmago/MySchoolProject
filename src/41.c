#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("The value of 'n' is not positive.\n");
    } else {
        for (int i = 1; i <= n / 2; ++i) {
            if (i != n - i) {
                printf("%d*%d = %d\n", i, n - i, i * (n - i));
            }
        }
    }
    
    return 0;
}
