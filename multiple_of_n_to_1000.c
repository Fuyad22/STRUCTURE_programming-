#include <stdio.h>
int main() { 
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for( int i=n ; i<=1000; i+=n){
        printf("%d is a multiple of %d\n", i, n);
    }
    return 0;
}