#include<stdio.h>
int fibonacci(int n)
{
	if(n<=1)
	{
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}
	int main()
	{
		int n;
		printf("Enter the number of terms in fibonacci series: ");
		scanf("%d", &n);
		if(n<=0)
		{
			printf("number of terms should be greater than 0\n");
			return 1;
		}
		printf("Fibonacci series: ");
		for(int i = 0; i < n; i++)
		{
			printf("%d", &fibonacci);
		}
		printf("\n");
	return 0;
}