#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the binomial coefficient
int binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to generate the Nth row of Pascal's Triangle
void generatePascalRow(int n) {
    for (int i = 0; i <= n; i++) {
        printf("%d ", binomialCoefficient(n, i));
    }
}

// Function to calculate the sum of the Nth row of Pascal's Triangle
int calculateRowSum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += binomialCoefficient(n, i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The Nth row of Pascal's Triangle: ");
    generatePascalRow(n);

    printf("\nThe sum of the Nth row of Pascal's Triangle: %d\n", calculateRowSum(n));

    return 0;
}


