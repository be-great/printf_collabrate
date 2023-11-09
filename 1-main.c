#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return(a - b);
}


int main(void)
{
	printf("%d\n", add(10, 100));
	printf("%d\n", sub(100, 10));
	return (0);
}
