#include "Double.h"

void copyDouble(void *dest, void *source)
{
	float *v1 = (float *)dest;
	float *v2 = (float *)source;
	
	*v1 = *v2;
}