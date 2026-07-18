#include <stdio.h>
int main() {
    int i, term=1, diff=1;
    
        for(i=1; i<=100; i++){
            printf("%d ", term);
            term += diff;
            diff++;
        }
       
    
}