#include <iostream>
#include <vector>

int interpolationSearch(std::vector<int> array, int key) {
	int low  = 0, high = array.size()-1;
	int position;
	while(low <= high && key >= array[low] && key <= array[high]) {
		position = low + ((key-array[low])*(high-low))/(array[high]-array[low]);

		if(array[position] == key)
			return position;

		if(array[position] < key){
			low = position+1;
		}
		else {
			high = position-1;
		}
	}
	return -1;
}

int main(){
	std::vector<int> items = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
	int element = 19;
	std::cout << "The index is: " << interpolationSearch(items, element) << std::endl;
	return 0;
}