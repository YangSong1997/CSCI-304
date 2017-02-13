#include <stdio.h>

int main() {
    int count;
    char c;

    printf("Input: ");
    count = 0;
    c = getchar();
    while (c != '\n') {
        if (c == ' '){
            count++;
        }
        c = getchar();
    }
    printf("%d\n", count);
    return 0;
} 