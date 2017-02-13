#include <stdio.h>

int main() {
    int tempnum = 0;
    int nextdigit;
    int sum = 0;
    char c;

    printf("Input: ");
    
    c = getchar();
    

    while (c != '\n') {
        if (c != ' '){
            nextdigit = c - 48;
            tempnum = 10 * tempnum + nextdigit;
        }
        else {
            sum += tempnum;
            tempnum = 0;
        }

        c = getchar();
    }

    sum += tempnum;
    tempnum = 0;


    printf("%d\n",sum);
    return 0;
} 