// This is code for countinuous data

//O(n^2) but space efficient.

#include <iostream>
#include <map>
#include <vector>

int subarraysum(std::vector<int> nums, int match) {
	int count  = 0;
	int sum = 0;
	for(int i = 0; i < nums.size(); i++) {
		sum = 0;
		for(int j = i; j < nums.size(); j++) {
			sum = sum + nums[j];
			if(sum == match) count++;
		}
	}
	return count;
}

int main() {
	std::vector<int> elements = {1, 2, 3, 1, 5, 6};
	int sum = 6;
	std::cout << subarraysum(elements, sum) << std::endl; 
}
