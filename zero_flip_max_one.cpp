// Array of 0s and 1s, find the position of 0 to be replaced with 1 to get longest continuous sequence of 1s.
// O(n), space: O(1) windowing technique

#include <vector>
#include <map>
#include <iostream>

int maxZerosToOnes(std::vector<int> elements){
	int max_ = 0;
	int max_index_;
	int prev_zero_ = -1;
	int prev_prev_zero = -1;

	for(int current = 0; current < elements.size(); current++){
		if(elements[current] == 0) {
			if(current-prev_prev_zero > max_){
				max_ = current-prev_prev_zero;
				max_index_ = prev_zero_;
			}
			prev_prev_zero = prev_zero_;
			prev_zero_ = current;
		}
	}
	if((elements.size()-prev_prev_zero) > max_){
		max_index_ = prev_zero_;
	}
	return max_index_;
}

int main() {
	std::vector<int> ele = {1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1};
	std::cout << maxZerosToOnes(ele) << std::endl;
}