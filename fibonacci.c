#include <stdio.h>

int main() {
    int n;
    long long a = 1, b = 1, c;

    scanf("%d", &n);

    if(n == 1 || n == 2)
        printf("1");
    else {
        for(int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%lld", b);
    }

    return 0;
}