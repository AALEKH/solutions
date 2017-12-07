#include <iostream>
#include <vector>

int binarySearch(std::vector<int> vec, int low, int high, int value) {
	while(low <= high) {
		int mid = (low + high)/2;
		if(vec[mid] < value){
			low = mid+1;
		} else if(vec[mid] > value) {
			high = mid-1;
		} else {
			return mid;
		}
	}
	return -1;
}

int findPivot(std::vector<int> arr, int low, int high)
{
   if (high < low)  return -1;
   if (high == low) return low;
 
   int mid = (low + high)/2;
   if (mid < high && arr[mid] > arr[mid + 1])
       return mid;
   if (mid > low && arr[mid] < arr[mid - 1])
       return (mid-1);
   if (arr[low] >= arr[mid])
       return findPivot(arr, low, mid-1);
   return findPivot(arr, mid + 1, high);
}

int pivotedBinarySearch(std::vector<int> elements, int key) {
	int pivot = findPivot(elements, 0, elements.size()-1);

	if(pivot == -1)
		return binarySearch(elements, 0, elements.size()-1, key);
	if(elements[pivot] == key)
		return pivot;
	if(elements[0] <= key) {
		return binarySearch(elements, 0, pivot-1, key);
	}
	return binarySearch(elements, pivot+1, elements.size()-1, key);
}

int main() {
	std::vector<int> items = {5, 6, 7, 8, 9, 10, 1, 2, 3};
	std::cout << "Mid found here: " << pivotedBinarySearch(items, 7) << std::endl;
	return 0;
}