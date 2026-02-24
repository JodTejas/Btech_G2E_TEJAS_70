#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) {
            printf("It is a Equilateral Triangle");
        }
        else if (a == b || b == c || a == c) {
            printf("It is a Isosceles Triangle");
        }
        else {
            printf("It is a Scalene Triangle");
        }
    }
    else {
        printf("Not a valid triangle");
    }

    return 0;
}