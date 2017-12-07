#include <iostream>
#include <vector>

int binarySearch(std::vector<int> vec, int low, int high, int value) {
	while(low <= high) {
		int mid = (low + high)/2;
		if(vec[mid] < value){
			low = mid+1;
		} else if(vec[mid] > value) {
			high = mid-1; // Moving low is not needed
		} else {
			return mid;
		}
	}
	return -1;
}


int main() {
	std::vector<int> items = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::cout << "Mid found here: " << binarySearch(items, 0, items.size()-1, 7) << std::endl;
	return 0;
}