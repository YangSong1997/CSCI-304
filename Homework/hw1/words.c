#include <stdio.h>

int main() {
    int count = 0;
    char c;
    char prev = ' ';

    printf("Input: ");
    
    c = getchar();
    while (c != '\n') {
        if (prev == ' ' && c != ' '){
            count += 1;
        }
        prev = c;
        c = getchar();
    }
    printf("%d\n",count);
    return 0;
} 