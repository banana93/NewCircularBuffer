#include <stdio.h>
#include "Integer.h"

void copyInt(void *dest, void *source)
{
	int *v1 = (int *)dest;
	int *v2 = (int *)source;
	
	*v1 = *v2;
	

}

