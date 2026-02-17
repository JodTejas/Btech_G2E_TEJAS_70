#include <stdio.h>

int main() {
    int n, i;
    long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial of a negative number does not exist.");
    } else {
        for(i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d is: %ld", n, factorial);
    }

    return 0;
}