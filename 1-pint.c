#include 'monty.h'

/**
 * pint - prints the top most element of stack
 *
 * Return: returns void on succeful program execution
 *
 */

void pint()
{
	top += 1;
	if(top == -1)
	{
		perror("can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", stuck_arr[top]);
	}
}
