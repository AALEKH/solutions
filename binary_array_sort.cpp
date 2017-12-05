// O's first then 1's

//O(n)

#include <iostream>
#include <map>
#include <vector>

int binary_array_sort(std::vector<int> nums, std::vector<int> nums2) {
	
	int size;
	std::vector<int> elements;
	int size_nums = nums.size();
	int size_nums2 = nums2.size();
	
	for(int i = 0; i < size_nums; i++)
		if(nums[i] == 0) elements.push_back(0);

	for(int j = 0; j < size_nums2; j++)
		if(nums2[j] == 0) elements.push_back(0);
	
	int diff = size_nums + size_nums2 - elements.size();
	
	for(int k = 0; k < diff; k++)
		elements.push_back(1);

	std::cout << "Elements Size" << elements.size() << std::endl;
	return 0;
}

int main() {
	std::vector<int> elements = {0, 1, 0, 1, 0, 1};
	std::vector<int> elements_2 = {1, 0, 0, 0, 0};
	binary_array_sort(elements, elements_2); 
}
