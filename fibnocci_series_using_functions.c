#include <stdio.h>

void fib_series(int n, int a, int b) {
    if (n == 0) {
        return;            // base condition: no more terms to print
    }

    printf("%d ", a);      // print current term
    fib_series(n - 1, b, a + b);  // recursive call with next terms
}

int main() {
    int n;

    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    fib_series(n, 0, 1);   // start with 0 and 1
    printf("\n");

    return 0;
}
