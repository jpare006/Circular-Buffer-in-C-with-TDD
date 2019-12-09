#include "CircularBuffer.h"

struct circular_buf_t
{
	uint8_t * buffer;
	size_t head;
	size_t tail;
	size_t max; //of the buffer
	BOOL full;
};

cbuf_handle_t CircularBuffer_Init(uint8_t * buffer, size_t size)
{
	cbuf_handle_t cbuf = malloc(sizeof(circular_buf_t));
	cbuf->buffer = buffer;
	cbuf->max = size;
	cbuf->head = 0;
	cbuf->tail = 0;
	cbuf->full = FALSE;

	return cbuf;
}

BOOL CircularBuffer_Empty(cbuf_handle_t cbuf)
{
	if(cbuf->head == cbuf->tail)
	{
		return TRUE;
	}

	return FALSE;
}

BOOL CircularBuffer_Full(cbuf_handle_t cbuf)
{
	return cbuf->full;
}

void CircularBuffer_Put(cbuf_handle_t cbuf, uint8_t data)
{
	cbuf->buffer[cbuf->head] = data;
}