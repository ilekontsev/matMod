
#include <stdio.h>
unsigned long int seed = 1;

unsigned int foo() {
    int a = 16807;
    unsigned int m = 1103515345;
    seed = seed * a % m;
    return seed;
}

int main() {
    unsigned int r = foo();
    unsigned int i = 1;
    while (foo() != 16807) {
        i++;
    }
    printf("%d\n", i);
    
    return 0;
}