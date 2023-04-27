#include "shell.h"

/**
 * bfree - frees a pointer and nullify the address
 * @ptr: address of the pointer to free
 *
 * Return: 1 if freed, otherwise nothing.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = BLANK;
		return (1);
	}
	return (0);
}
