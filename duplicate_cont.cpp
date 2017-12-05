// Duplicate element in continuous array

//O(n) with O(1) space

#include <iostream>
#include <map>
#include <vector>

int duplicate_element(std::vector<int> elements) {
	for(int i = 0; i < elements.size(); i++){
		if(elements[elements[i]] < 0) {
			return -1*elements[elements[i]];
		} else {
			elements[elements[i]] = -1*elements[elements[i]];
		}
	}
	return 0;
}

int main() {
	std::vector<int> ele = {1, 2, 3, 3};
	std::cout << "Duplicate element is: " << duplicate_element(ele) << std::endl;
}