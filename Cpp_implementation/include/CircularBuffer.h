#ifndef _CIRCULAR_BUFFER_H_
#define _CIRCULAR_BUFFER_H_

template <class T>
class circular_buffer
{
	public:
		size_t size();
		circular_buffer(size_t s);
		~circular_buffer();
	private:
		T max_size;
		T * buffer;
};

//templates must have their declaration and implementation in one header file
//however, if you want to seperate the declaration from the implementation
//you can do so by renaming the .cpp -> .ipp and including the .ipp file
//at the end of the header file
#include "CircularBuffer.ipp"

#endif /* _CIRCULAR_BUFFER_H_ */