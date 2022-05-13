#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int a = 10;
    int b = 2;
    for(a= 10;a < 13;a++) {
        for(b=2; b < 20;b++){
            if (a/b == 2) {
            printf("%i,%i   ",a,b);
           // printf("%i",b);
            }
        }
    }
    return 0;
}