#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

void get_max(int x, int y)
{
    if (x < y) {
        printf("%d is bigger than %d\n", y, x);
    } else if (x > y) {
        printf("%d is bigger than %d\n", x, y);
    } else {
        printf("%d and %d have same value\n", x, y);
    }
}

int main(void)
{
    int a, b;
    int n;
    int x, y;

    printf("Input two integers to sum: ");
    scanf("%d %d", &a, &b);
    printf("Sum is: %d\n", sumTwo(a, b));

    printf("Input an integer to square: ");
    scanf("%d", &n);
    printf("Square is: %d\n", square(n));

    printf("Input two integers to compare: ");
    scanf("%d %d", &x, &y);
    get_max(x, y);

    return 0;
}
