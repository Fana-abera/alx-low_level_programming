#include<stdio.h>

/**
 * main - prints the size of various types on the computer
 *
 * Return: Always 0 (success) 
 */
int main(void)
{
	int a;
	long long int c;
	char d;
	float f;
	long int b;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
