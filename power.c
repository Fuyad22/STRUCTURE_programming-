#include <stdio.h>
int main (){ 
    int x, y;
    long long result =1;
    printf("Enter the base (x) and power (y): ");
    scanf("%d %d", &x, &y);
    for(int i=1; i<=y; i++){
        result *= x;
    }
    printf("%d raised to the power of %d is: %lld\n", x ,y, result);
    return 0;
    

}