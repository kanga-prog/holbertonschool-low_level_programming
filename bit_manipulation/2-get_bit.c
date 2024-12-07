#include <stdio.h>
#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is out range for an unsigned long int (norm 64 b)*/
	if (index >= sizeof(n) * 8) {
		return (-1);  /* Error: index is out of range*/
	}

	return ((n >> index) & 1);
}

