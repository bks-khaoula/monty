#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @stack: stack given by main
 * @line_cnt: ammount of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
