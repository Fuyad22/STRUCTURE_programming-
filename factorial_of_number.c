#include <stdio.h>
int main(){
    long long factorial =1;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    printf("The factorial of %d is: %lld\n", n, factorial);
    return 0;
}