#include <stdio.h>

int main() {
    int i;

    printf("Hello, World!\n");

    for(i = 0; i < 5; i++) {
        printf("Line %d", i);
        if (i == 3) {
            break;
        }
        printf("*");
    }

    return 0;
}
