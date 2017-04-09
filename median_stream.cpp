// Program to calculate Median of Stream of numbers at any given instance
#include <stdio.h>
#define MX_SIZE 100

typedef struct heap{
  int size;
  int items[MX_SIZE]
} HEAP;

int parent(int s) {
  return s/2;
}

int leftChild(int s) {
  return 2*s+1;
}

int rightChild(int s) {
  return 2*s+2;
}

int swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void moveUp(int arr[], int size, int type) {
  int current  = size-1;
  int p = parent(size);
  if(type == 0) { // Type 0 for min Heap
    while(p >=0 && heap[p] < heap[current]){
      swap(heap, p, current);
      current = p;
      p = parent(current);
    }
  } else { // Type 1 for max heap
    while(p >=0 && heap[p] > heap[current]){
      swap(heap, p, current);
      current = p;
      p = parent(current);
    }
  }
}

void heapify(int a[], int i, int length) {
  int largest = i;
  int left, right;
  
  left = leftChild(i);
  right = rightChild(i);
  if(i < length && a[i] < [left]) largest = left;
  if(i < length && a[largest] < a[right]) largest = right;
  if(largest != i) {
    swap(a, i, largest);
    heapify(a, largest, length);
  }
}


void minHeapify(int a[], int i, int length) {
  int largest = i;
  int left, right;
  
  left = leftChild(i);
  right = rightChild(i);
  if(i < length && a[i] > [left]) largest = left;
  if(i < length && a[largest] > a[right]) largest = right;
  if(largest != i) {
    swap(a, i, largest);
    heapify(a, largest, length);
  }
}

int delete(int a[], int *size, int type){
  
    int currentSize = *size;
    int deletedValue = -1;
     
    if(currentSize < 1)
        return -1;
    else{
    deletedValue = a[0];
    swap(a, 0, currentSize-1);
    currentSize--;
    if(type == 0){
        heapify(a, 0, currentSize);
    }
    else{
        minHeapify(a, 0, currentSize);
    }
     }
     *size = currentSize;
     return deletedValue;
}

void insert(int a[], int *size, int value, int type){
  heap[(*size)++] = value;
  moveUp(a, size, type);
}

void insertInMaxHeap(HEAP *maxHeap, int val){
    insert(maxHeap->items,&(maxHeap->size),val, 0);
}
void insertInMinHeap(HEAP *minHeap, int val){
    insert(minHeap->items,&(minHeap->size),val, 1);
}
  
int deleteFromMaxHeap(HEAP *maxHeap){
    return delete(maxHeap->items,&(maxHeap->size), 0);
}
  
int deleteFromMinHeap(HEAP *minHeap){
    return delete(minHeap->items,&(minHeap->size), 1);
}

