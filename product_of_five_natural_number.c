#include <stdio.h>
int main(){
    int i;
    int product = 1;
    for (i = 1; i <= 5; i++) {
        product *= i;
    }
    printf("The product of the first five natural numbers is: %d\n", product);
    return 0;
}