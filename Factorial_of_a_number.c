//Factorial of a number using recursion
//Recursion - Calling a function from the same function itself
#include<stdio.h>
int factorial(int n)
{
	//Base case
	if(n == 1)
	{
		return 1;
	}
	return n * factorial(n - 1);	//recursive call
}
int main()
{
	int n;
	scanf("%d", &n);
	int res = factorial(n);
	printf("%d", res);
}
	
