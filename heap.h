#ifndef HEAP_H
#define HEAP_H

class BinaryHeap {
	int * heap;
	int heapSize;
	int current;
public:
	BinaryHeap();

	// Insert an element into the heap, and resize the heap array if necessary
	void insert(int element);

	// Resizes the heap array to 2 * heapSize
	void resize();

	// Retrieves the current size of our heap array
	int getHeapSize();

	// Retrieves the ptr to the heap
	int * getHeap();

	// Retrieves the element at the specified index
	int getElement(int index);

	// Set the element at the specified index to the given value: primarily for internal use
	void setElement(int index, int value);

	// Percolate an element down to the bottom of the tree, switching with the smallest child
	void percolateDown(int index);

	// Percolate an element up the tree until it is in the proper location, switching only with elements that are larger than it
	void percolateUp(int index);

	// Sorts the array which is passed in by inserting it into the heap and then removing elements and replacing them in the array
	void sort(int * array);
};

#endif