#ifndef NewCircularBuffer_H
#define NewCircularBuffer_H

typedef struct
{
	void *head;
	void *tail;
	int length;		// total number of item allowable in the buffer
	int size;		// current number of item in the buffer
	int sizeOfType;
	void *buffer;
} CircularBuffer;

CircularBuffer *circularBufferNew(int length, int sizeOfType);
void circularBufferDel(CircularBuffer *cb);
void circularBufferAdd(CircularBuffer *cb, void *obj, void(*copy)(void *, void *));
void circularBufferRemove(CircularBuffer *cb, void *obj, void(*copy)(void *, void *));
int circularBufferIsEmpty(CircularBuffer *cb);
int circularBufferIsFull(CircularBuffer *cb);

#endif // NewCircularBuffer_H
