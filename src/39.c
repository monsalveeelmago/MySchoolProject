#include <stdio.h>
int main() {
    int i = 1;
    printf("Hello, World!\n");
    for(i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}
