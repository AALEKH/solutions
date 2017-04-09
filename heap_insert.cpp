// Contains Psuedo Code to demonstrate insertion of element in a heap

/* Some Special Point:
*  1) Parent element of a heap node is given by i/2
*  2) Left element of a heap node is given by 2i + 1
   3) Right element of a heap node is given by 2i + 2
   4) Insertion of element always happen at the last node and then balanced out later on
*/
int parent(int i) {
  return i/2;
}

int swap(int a[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void moveUp(int heap[], int size) {
  int current = size-1;
  int p = parent(size);
  while(p>=0 && heap[p] < heap[current]) {
    swap(heap, p, current);
    current = p;
    p = parent(current);
  }
}

void insert(int heap[], int *size, int value) {
  heap[(*size)++] = value;
  moveUp(heap, *size);
}
