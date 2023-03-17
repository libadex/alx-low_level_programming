#include <stdio.h>
/**
 * main - this is the main function
 * Return: 0 when successful
 */
int main(void)
{
	printf("size of a char: %lu bytes(s)", sizeof(char));
	printf("size of an int: %lu bytes(s)", sizeof(int));
	printf("size of a long int: %lu bytes(s)", sizeof(long int));
	printf("size of long long int: %lu bytes(s)", sizeof(long long int));
	printf("size of float: %lu bytes(s)", sizeof(float));
	return (0);
}
