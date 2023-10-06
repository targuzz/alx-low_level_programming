#include "main.h"
#include <stdlib.h>
#Include <stdio.h>

/**
 * _realloc - ...
 * @ptr: ...
 * @old_size: ...
 * @new_size: ...
 * Return: ...
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr + malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	free (ptr);
	return (nptr);
}
