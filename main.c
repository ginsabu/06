#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n)
{
	int res = 1;
	
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	
	return res;
}

int combination(int n, int r)
{
	int n_factorial;
	int r_factorial;
	int n_minus_r;
	
	n_factorial = factorial(n);
	r_factorial = factorial(r);
	n_minus_r = factorial(n-r);
	
	
	return n_factorial / (n_minus_r * r_factorial);
}

int get_integer()
{
	int a;
	
	scanf("%d", &a);
	
	return a;
}

int main(void)
{
	int n;
	int r;
	int result;
	
	printf("Input n: ");
	n = get_integer();
	
	printf("Input r: ");
	r = get_integer();
	
	result = combination(n, r);
	
	printf("The combination value is: %d", result);
	
	return 0;
}