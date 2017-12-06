// Maximum Difference between two elements such that smaller number always appear before larger one.
// Complexity : O(n) and O(1) in terms of space

#include <iostream>
#include <vector>

int max_diff(std::vector<int> elements) {
	int max = -10, min = 1000, sm = 2000;
	for(int i = 0; i < elements.size(); i++) {
		if(min > elements[i]){
			min = elements[i];		
		} else if(max < elements[i]){
			max = elements[i];
			sm = min;
		}
	}
	std::cout << " Max: " << max << " Min: " << sm <<std::endl;
	return max-sm;
}

int main() {
	std::vector<int> vec = {2, 7, 9, 5, 1, 3, 5};
	std::cout << "Max diff between two elements in a vector is " << max_diff(vec) << std::endl;
	return 0;
}
