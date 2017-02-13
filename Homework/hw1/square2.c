#include <stdio.h>

int main() {
    int num = 0;
    int nextdigit;
    char c;

    printf("Input: ");
    
    c = getchar();
    while (c != '\n') {
        nextdigit = c - 48;
        num = 10 * num + nextdigit;
        c = getchar();
    }
    printf("%d\n",num*num);
    return 0;
} 