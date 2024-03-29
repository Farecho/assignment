#include <stdio.h>

void generateFibonacci(int n) {
    int a = 0, b = 1, nextTerm, i;
    
    printf("Fibonacci Series up to %d terms:\n", n);
    
    for (i = 1; i <= n; ++i) {
        printf("%d,", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
        printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    generateFibonacci(n);

    return 0;
}
