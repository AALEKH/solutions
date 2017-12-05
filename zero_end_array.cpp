// Move all zero's to end of the array
// O(n) and O(1)

#include <iostream>
#include <vector>

void zero_end_array(std::vector<int> array) {
	int k = 0;
	for(int i = 0; i < array.size(); i++)
		if(array[i]!=0) array[k++] = array[i];

	for(int j = k; k < array.size(); j++)
		array[k++] = 0;

	std::cout << "Output of array is: " << std::endl;
	for(int l = 0; l < array.size(); l++)
		std::cout << array[l] << std::endl;
}

int main() {
	std::vector<int> ele = {1, 0, 5, 0, 3, 9, 0};
	zero_end_array(ele);
	return 0;
}