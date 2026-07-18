#include <stdio.h>

int main() {
    int term = 1;
    int diff = 1;

    while(term <= 100) {
        printf("%d ", term);
        term += diff;
        diff++;
    }

    return 0;
}