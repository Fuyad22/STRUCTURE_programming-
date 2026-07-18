#include <stdio.h>
int main (){ 
    int n, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    printf("The number of divisors of %d is: %d\n", n, count);
    return 0;
}