#pragma once
#include "BaseArray.h"
class MyQueue : public BaseArray{
	int head;
	int size;
	int tail;
public:
	MyQueue(int capacity) : BaseArray(capacity) {
		head = 0;
		size = 0;
		tail = -1;
	}
	void enqueue(int n);
	int dequeue();
	int capacity() { return getCapacity(); }
	int length() { return size; }
};

