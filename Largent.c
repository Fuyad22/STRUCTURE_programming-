#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, num, largest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter largest number: ");
    scanf("%d", &largest);
    
    for(int i = 2; i <= n; i++) {
        scanf("%d", &num);

        if(num > largest)
            largest = num;
    }

    printf("Largest = %d", largest);

    return 0;
}
