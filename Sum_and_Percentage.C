#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int sum,percentage;
    printf("Enter marks of 5 subjects :-\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    sum = num1 + num2 + num3 + num4 + num5;
    percentage = sum / 5 ;
    printf("Sum of marks = %d\n", sum);
    printf("Percentage = %d\n", percentage);

    return 0;
}