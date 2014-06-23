#include <malloc.h>
#include <stdio.h>
#include "NewCircularBuffer.h"


CircularBuffer *circularBufferNew(int length, int sizeOfType)
{
	CircularBuffer *cb = malloc(sizeof(CircularBuffer));
	cb->length = length;
	cb->size = 0;
	cb->sizeOfType = sizeOfType;
	cb->head = cb->tail = cb->buffer = malloc(sizeOfType * length);
	return cb;
}

void circularBufferAdd(CircularBuffer *cb, void *obj, void(*copy)(void *, void *))
{
	if(cb->size != 0) 
		cb->head++;

	cb->buffer[cb->size] = valueToAdd; 
	cb->size++; 
	
}

void circularBufferDel(CircularBuffer *cb)
{
	free(cb);
}
