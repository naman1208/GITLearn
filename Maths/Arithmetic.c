#include<stdio.h>
int Factorial(int n)
{
	if(n==0)return 1;
	return n*Factorial(n-1);
}
int main()
{
	int a=10,b=20,c;
	printf("%d",a+b);
	return 0;
}
