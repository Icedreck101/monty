#include 'monty.h'

/**
 * swap - swaps the last two values of stack
 *
 * Returns: returns void on succeful execution
 *
 */
void swap()
{
	top += 1;
	if(top < 1)
	{
		perror("can't swap, stack too short\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		int temp;
		temp = stack_arr[top];
		stack_arr[top] = stack_arr[top - 1];
		stack_arr[top - 1] = temp;
	}
}
