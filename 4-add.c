#include 'monty.h'

/**
 * add - adds the top 2 elements of a stck
 * store the result in the second top element
 *
 * Return: returns void on succeful program execution
 */

void add()
{
	top += 1;
	if(top < 1)
	{
		perror("can't add, stack too short\n");
		exit(EXIT_FAILURE)
	}
	else
	{
		stack_arr[top - 1] += stack_arr[top];
		top = top - 1;
	}
}
