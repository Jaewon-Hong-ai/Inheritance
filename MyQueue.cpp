#include "MyQueue.h"

void MyQueue:: enqueue(int n) {
	if (size == capacity())
		return;
	put(head++, n);
	size++;
	head = head % capacity();
}

int MyQueue:: dequeue() {
	if (size == 0)
		return -1;
	size--;
	tail++;
	tail = tail % capacity();
	return get(tail);
}
