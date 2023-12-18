#include 'main.h'

/**
 * pop - deletes tthe top most element of stack
 *
 * Return: returns void on sucsseful program execution
 *
 */

void pop()
{
	top += 1;
	if(top == -1)
	{
		perror("can't pop an empty stack\n");
		exit(EXIT_FAILURE);
	}
	else
		top = top - 1;
}
