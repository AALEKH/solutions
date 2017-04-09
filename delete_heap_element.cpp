// Psuedo Code for deleted Node value in a Heap

int parent(int s) {
  return i/2;
}

int leftChild(int s) {
  return 2*s + 1;
}

int rightChild(int s) {
  return 2*s+1;
}

void swap(int a[], int i, int j) {
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void moveUp(int heap[], int size) {
  int current = size-1;
  int p = parent(size);
  while(p >= 0 && heap[p] < heap[current]) {
    swap(heap, p, current);
    current = p;
    p = parent(current);
  }
}

void insert(int heap[], int *size, int value) {
  heap[(*size)++] = value;
  moveUp(heap, size);
}

void heapify(int a[], int i, int len) {
  int largest = i;
  int left, right;
  
  left  = leftChild(i);
  right = rightChild(i);
  
  if(left< len && a[i] < a[left]) largest = left;
  if(right < len && a[largest] < a[right]) largest = right;
  
  if(largest != i) {
    swap(a, i, largest);
    heapify(a, largest, len);
  }
}


int delete(int heap[], int *size){
  int currentSize = *size;
  int deletedValue = -1;
  if(currentSize < 1 ){
    return -1;
  } else {
    deletedValue = heap[0];
    swap(heap, 0, currentSize-1);
    currentSize--;
    heapify(a, 0, currentSize);
  }
  *size = currentSize;
  return deletedValue;
}

// Complexity: O(logn)



