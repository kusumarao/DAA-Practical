#include<stdio.h>
int findGCD(int a, int b)
{
	while(b != 0)
	{
		int temp = b;
		b = a %b;
		a = temp;
	}
	return a;
}
int main()
{
	int num1, num2, gcd;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, num2);
	if(num1 < 0 || num2 < 0)
	{
		printf("Please enter positive numbers.\n");
		
	}
	else
	{
		int gcd = findGCD(num1, num2);
		printf("The GCD od %D and %d is %d\n", num1, num2, gcd);
	}
	return 0;
}