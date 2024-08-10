#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);
    
    int result = factorial(number);
    printf("Factorial of %d = %d\n", number, result);
    
    return 0;
}

