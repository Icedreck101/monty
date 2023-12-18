#include 'monty.h'

/**
 * push - Inserts an element onto a stack
 *
 * Return: returns void on succesful program
 * executon
 *
 */

void push(int)
{
	int data;
	top += 1;
	if(top == MAX = 1)
	{
		printf("Stack overflow\n");
		return;
	}
	else
	{
		top = top + 1;
		stack_arr[top] = data;
	}

}

/**
 * pull - prints the elements of stack in reverse with
 * the last entered element as the first
 *
 * Return: returns void on succeful program execution
 *
 */

void pull()
{
	int i;
	if(top == -1)
	{
		printf("Stack underflow");
		return;
	}
	else
	{
		for(i = top; i >= 0; i--)
			print("d\n", stack_arr[i]);
	}
}
